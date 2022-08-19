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
    bool check(TreeNode* root,TreeNode* mini,TreeNode* maxi)
    {
        if(root==NULL)
        {
            return true;
        }
        if((mini && root->val <=mini->val) || (maxi && root->val >=maxi->val))
        {
            return false;
        }
        return check(root->left,mini,root) && check(root->right,root,maxi);
    }
    bool isValidBST(TreeNode* root) 
    {
        TreeNode* mini=NULL;
        TreeNode* maxi=NULL;
        return check(root,mini,maxi);
    }
};