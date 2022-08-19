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
    //int i=0;
    TreeNode* solve(vector<int>& preorder,int &maxi,int n,int &i)
    {
        if(i==n || preorder[i]>maxi)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i]);
        i++;
        root->left=solve(preorder,root->val,n,i);
        root->right=solve(preorder,maxi,n,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int maxi=INT_MAX;
        int n=preorder.size();
        int i=0;
        return solve(preorder,maxi,n,i);
    }
};