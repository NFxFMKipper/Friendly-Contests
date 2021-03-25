//https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

bool areAlmostEqual(string s1, string s2) {
        int n = (int)s1.length();
        char ch1 = '#', ch2;
        for(int i = 0; i < n; ++i)
        {
            if(s1[i] == s2[i])
                continue;
            else if(ch1 == '#' && s1[i] != s2[i])
            {
                ch1 = s1[i];
                ch2 = s2[i];
            }
            else if(ch1 != '@' && s1[i] != s2[i])
            {
                if(ch1 != s2[i] || ch2 != s1[i])
                    return false;
                else
                    ch1 = '@';
            }
            else
            {
                return false;
            }
        }
        if(ch1 == '#' || ch1 == '@')
            return true;
        else
            return false;
    }
