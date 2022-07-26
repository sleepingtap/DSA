/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root==NULL || root==p || root==q)
        {
            return root;
        }
        TreeNode* root1=lowestCommonAncestor(root->left,p,q);
        TreeNode* root2=lowestCommonAncestor(root->right,p,q);
        if(root1==NULL)
        {
            return root2;
        }
        if(root2==NULL)
        {
            return root1;
        }
        // if(root1==NULL && root2==NULL)
        // {
        //     return root;
        // }
        
        
        return root;
    }
};