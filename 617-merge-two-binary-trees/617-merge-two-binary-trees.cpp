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
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        
        int s=0;
        if(root1==NULL && root2==NULL)
        {
            return NULL;
        }
        if(root1==NULL && root2!=NULL)
        {
            s=root2->val;
            TreeNode* node=new TreeNode(s);
            node->left=mergeTrees(root1,root2->left);
            node->right=mergeTrees(root1,root2->right);
             return node;
        }
        if(root1!=NULL && root2==NULL)
        {
            s=root1->val;
            TreeNode* node=new TreeNode(s);
            node->left=mergeTrees(root1->left,root2);
            node->right=mergeTrees(root1->right,root2);
             return node;
        }
        if(root1!=NULL && root2!=NULL)
        {
            s=root2->val+root1->val;
            TreeNode* node=new TreeNode(s);
            node->left=mergeTrees(root1->left,root2->left);
            node->right=mergeTrees(root1->right,root2->right);
             return node;
        }
        return NULL;
       
    }
};