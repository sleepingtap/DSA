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
        // if(root->left==p && root->right==q)
        // {
        //     return root;
        // }
        if(p->val<root->val && q->val>root->val)
        {
            return root;
        }
        if(p->val<root->val)
        {
            root=lowestCommonAncestor(root->left,p,q);
        }
        else if(q->val>root->val)
        {
            root=lowestCommonAncestor(root->right,p,q);
        }
    
        return root;
    }
};