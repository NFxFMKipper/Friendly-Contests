class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = (int)s.length();
        stack<char> stac1;
        stack<int> stac2;
        int temp;
        char prev = '#';
        while(!stac1.empty())
            stac1.pop();
        while(!stac2.empty())
            stac2.pop();
        for(int i = 0; i < n; ++i)
        {
            stac1.push(s[i]);
            if(prev == '#')
            {
                stac2.push(1);
            }
            else
            {
                if(stac1.top() == prev)
                {
                    temp = stac2.top()+1;
                    stac2.pop();
                    stac2.push(temp);
                }
                else if(stac1.top() != prev)
                {
                    stac2.push(1);
                }
                if(stac2.top() == k)
                {
                    for(int j = 0; j < k; ++j)
                    {
                        cout << stac1.top();
                        stac1.pop();
                    }
                    stac2.pop();
                }
            }
            if(!stac1.empty())
                prev = stac1.top();
            else
                prev = '#';
        }
        string ans = "";
        while(!stac1.empty())
        {
            ans.push_back(stac1.top());
            stac1.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
