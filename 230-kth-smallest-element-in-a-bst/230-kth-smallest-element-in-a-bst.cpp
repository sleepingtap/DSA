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
    int kthSmallest(TreeNode* root, int k) 
    {
        if(root==NULL)
        {
            return -1;
        }
        int ans=0;int i=0;
        TreeNode* cur=root;
        while(cur!=NULL)
        {
            if(cur->left==NULL)
            {
                k--;
                if(k==0)
                {
                    ans=cur->val;
                    //return ans;
                }
                cur=cur->right;
            }
            else
            {
                TreeNode* prev=cur->left;
                while(prev->right && prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                    prev->right=cur;
                    cur=cur->left;
                }
                else
                {
                    prev->right=NULL;
                    k--;
                    //i++;
                    if(k==0)
                    {
                        ans=cur->val;
                       // return ans;
                    }
                    cur=cur->right;
                }
            }
        }
        return ans;       
    }
};