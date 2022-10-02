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
    int maxsum(TreeNode* root,int &sum)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=max(0,maxsum(root->left,sum));
        int r=max(0,maxsum(root->right,sum));
        sum=max(sum,l+r+root->val);
        return root->val+max(l,r);
        
    }
  
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int sum=INT_MIN;
        maxsum(root,sum);
        return sum;
    }
};