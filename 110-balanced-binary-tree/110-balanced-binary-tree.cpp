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
    int h(TreeNode* root,int & ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=h(root->left,ans);
        int r=h(root->right,ans);
        ans=max(ans,abs(l-r));
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        int ans=0;
        h(root,ans);
        if(ans>1)
        {
            return false;
        }
        return true;
    }
};