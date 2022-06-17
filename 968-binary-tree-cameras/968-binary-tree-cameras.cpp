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
    //[-1]->camera needed,uncovered
    //[0]->has camera
    //[1]->covered
    int help(TreeNode* root,int &ans)
    {
        if(root==NULL)
        {
            return 1;
        }
        int l=help(root->left,ans);
        int r=help(root->right,ans);
        if(l==-1 || r==-1)
        {
            ans++;
            return 0;
        }
        else if(l==0 || r==0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    int minCameraCover(TreeNode* root) 
    {
        int ans=0;
        if(help(root,ans)==-1)
            ans++;
        return ans;
        
    }
};