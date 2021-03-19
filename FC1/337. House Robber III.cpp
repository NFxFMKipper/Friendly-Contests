//https://leetcode.com/problems/house-robber-iii/

class Solution {
public:
    int *max_rob(TreeNode* node)
    {
        int arr[2];
        if(node == nullptr)
        {
            arr[0] = arr[1] = 0;
            return arr;
        }
        int *lef = max_rob(node->left);
        int left[2];
        left[0] = lef[0];
        left[1] = lef[1];
        int *right = max_rob(node->right);
        arr[0] = max(left[0], left[1])+max(right[0], right[1]);
        arr[1] = node->val+left[0]+right[0];
        return arr;
    }
    
    int rob(TreeNode* root) {
        int *arr =  max_rob(root);
        return max(arr[0], arr[1]);
    }
};
