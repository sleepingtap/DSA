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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int c=1; 
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            if(c%2!=0)
            {
                for(int i=1;i<=n;i++)
                {
                    auto a=q.front();
                    q.pop();
                    if(a->left)
                    {
                        q.push(a->left);
                    }
                    if(a->right)
                    {
                        q.push(a->right);
                    }
                    v.push_back(a->val);
                }
                ans.push_back(v);
            }
            else
            {
                for(int i=1;i<=n;i++)
                {
                    auto a=q.front();
                    q.pop();
                    if(a->left)
                    {
                        q.push(a->left);
                    }
                    if(a->right)
                    {
                        q.push(a->right);
                    }
                    v.push_back(a->val);
                }
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            c++;
        }
        return ans;
    }
};