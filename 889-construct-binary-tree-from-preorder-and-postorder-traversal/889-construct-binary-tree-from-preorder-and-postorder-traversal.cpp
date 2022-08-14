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
    int position( vector<int>& post,vector<int>& pre,int n,int &pre_ind)
    {
        for(int i=0;i<n;i++)
        {
            if(post[i]==pre[pre_ind])
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>& pre, vector<int>& post,int n,int &pre_ind,int post_st,int post_end)
    {
        if(pre_ind>=n || post_st>post_end)
        {
            return NULL;
        }

        TreeNode* root=new TreeNode(pre[pre_ind]);
        pre_ind++;
        if( post_st==post_end)
        {
            return root;
        }

        int pos=position(post,pre,n,pre_ind);

        root->left=solve(pre,post,n,pre_ind,post_st,pos);
        root->right=solve(pre,post,n,pre_ind,pos+1,post_end-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) 
    {
        int n=pre.size();
        int pre_ind=0;
        TreeNode* ans=solve(pre,post,n,pre_ind,0,n-1);
        return ans;
    }
};