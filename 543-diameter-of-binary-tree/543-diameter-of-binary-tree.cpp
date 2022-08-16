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
    int h(TreeNode* root)
    {
        if(root==NULL)
        {
            return -1;
        }
        int l=h(root->left);
        int r=h(root->right);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=diameterOfBinaryTree(root->left);
        int r=diameterOfBinaryTree(root->right);
        //int a=maxd(root)-1;
        //int b=mind(root)-1;
        //cout<<a<<" "<<b;
        int ans=h(root->left)+h(root->right)+2;
        int res=max(l,max(r,ans));
        return res;
    }
};