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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int s=0,e=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                auto a=q.front().first;
                long long b=q.front().second;
                q.pop();
                if(i==1)
                {
                    s=b;
                }
                if(i==n)
                {
                    e=b;
                }
                if(a->left)
                {
                    q.push({a->left,2*b+1});
                }
                if(a->right)
                {
                    q.push({a->right,2*b+2});
                }
            }
            ans=max(ans,e-s+1);
        }
        return ans;
    }
};