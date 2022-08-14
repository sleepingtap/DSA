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
    int position(vector<int>& inorder,int ele,int n)
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
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int n,int &post_ind,int in_st,int in_end)
    {
        if(post_ind<0 || in_st>in_end)
        {
            return NULL;
        }
        int ele=postorder[post_ind];
        post_ind--;
        int pos=position(inorder,ele,n);
        TreeNode* root=new TreeNode(ele);
        
        root->right=solve(inorder,postorder,n,post_ind,pos+1,in_end);
        root->left=solve(inorder,postorder,n,post_ind,in_st,pos-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n=inorder.size();
        int post_ind=n-1;
        TreeNode* ans=solve(inorder,postorder,n,post_ind,0,n-1);
        return ans;
    }
};