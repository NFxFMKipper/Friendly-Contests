//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = (int)strs.size();
        int counts = 0, l = 0;
        unordered_map<string, int> umap;
        umap.clear();
        vector<vector<string>> vec;
        vec.clear();
        for(int i = 0; i < n; ++i)
        {
            if(strs[i].length() == 0)
                counts++;
            else
            {
                string temp = strs[i];
                sort(temp.begin(), temp.end());
                cout << temp << "\t";
                if(!umap[temp])
                {
                    vector<string> lol;
                    lol.push_back(strs[i]);
                    vec.push_back(lol);
                    umap[temp] = ++l;
                }
                else
                {
                    vec[umap[temp]-1].push_back(strs[i]);
                }
            }
        }
        if(counts)
        {
            vector<string> lmao;
            for(int i = 0; i < counts; ++i)
            {
                lmao.push_back("");
            }
            vec.push_back(lmao);
        }
        return vec;
    }
};
