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
    int position( vector<int>& inorder,int n,int ele)
    {
        for(int i=0;i<n;i++)
        {
            if(inorder[i]==ele)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int n,int &pre_ind,int in_st,int in_end)
    {
        if(pre_ind>=n || in_st>in_end)
        {
            return NULL;
        }
        int ele=preorder[pre_ind];
        pre_ind++;
        int pos=position(inorder,n,ele);
        TreeNode * root=new TreeNode(ele);
        root->left=solve(preorder,inorder,n,pre_ind,in_st,pos-1);
        root->right=solve(preorder,inorder,n,pre_ind,pos+1,in_end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int n=preorder.size();
        int pre_ind=0;
        TreeNode* ans=solve(preorder,inorder,n,pre_ind,0,n-1);
        return ans;
    }
};