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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>>ans;
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            map<int,multiset<int>>level;
            
            while(n--)
            {
                auto node=q.front().first;
                int x=q.front().second;
                level[x].insert(node->val);
                q.pop();
                
                if(node->left)
                {
                    q.push({node->left,x-1});
                }
                if(node->right)
                {
                    q.push({node->right,x+1});
                }
            }
            for(auto it:level)
            {
                for(auto i:it.second)
                {
                    mp[it.first].push_back(i);
                }
            }
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};