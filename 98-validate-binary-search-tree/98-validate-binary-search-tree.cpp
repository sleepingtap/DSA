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
    bool check(TreeNode* root,TreeNode* prev,TreeNode* prev1)
    {
        if(root==NULL)
        {
            return true;
        }
        if(prev!=NULL && prev->val>=root->val)
        {
            return false;
        }
        if(prev1!=NULL && prev1->val<=root->val)
        {
            return false;
        }
        return check(root->left,prev,root) && check(root->right,root,prev1);
    }

    bool isValidBST(TreeNode* root) 
    {
        TreeNode* prev=NULL;
        TreeNode* prev1=NULL;
        return check(root,prev,prev1);

//         if(root==NULL)
//         {
//             return true;
//         }
//         if(prev!=NULL && prev->val>=root->val)
//         {
//             return false;
//         }
//         prev=root;
//         if(root->left)
//         {
//             if(root->left->val>=root->val)
//             {
//                 return false;
//             }
//         }
        
//         if(root->right)
//         {
//             if(root->right->val<=root->val)
//             {
//                 return false;
//             }
//         }
//         isValidBST(root->left);
//         isValidBST(root->right);
//         return true;
    }
};