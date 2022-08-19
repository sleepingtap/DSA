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
        if(root==NULL || root->val==p->val || root->val==q->val)
        {
            return root;
        }
        if(root->val>p->val && root->val<q->val)
        {
            return root;
        }
         if(root->val>=p->val)
        {
             root=lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val<=q->val)
        {
            root= lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};