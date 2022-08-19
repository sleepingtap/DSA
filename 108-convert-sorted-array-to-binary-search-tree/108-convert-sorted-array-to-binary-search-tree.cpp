/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* f(int s,int e,vector<int>& nums)
    {
        if(s>e)
        {
            return NULL;
        }
        int m=s+(e-s)/2;
        TreeNode* root=new TreeNode(nums[m]);
        root->left=f(s,m-1,nums);
        root->right=f(m+1,e,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return f(0,nums.size()-1,nums);
    }
};