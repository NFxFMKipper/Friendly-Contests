//https://leetcode.com/problems/longest-continuous-increasing-subsequence/

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = (int)nums.size();
        int temp = 1, ans = 0;
        if(n)
            ans = 1;
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] > nums[i-1])
                temp++;
            else
            {
                ans = max(temp, ans);
                temp = 1;
            }
            if(n == 1+i)
                ans = max(temp, ans);  
        }
        return ans;
    }
};
