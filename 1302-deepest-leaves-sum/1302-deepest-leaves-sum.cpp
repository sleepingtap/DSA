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
    vector<vector<int>>level(TreeNode* root)
    {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>levels;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                levels.push_back(temp->val);
            }
            ans.push_back(levels);
        }
        return ans;
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        vector<vector<int>>res;
        res=level(root);
        vector<int>final;
        int s=0;
        final=res[res.size()-1];
        for(int i=0;i<final.size();i++)
        {
            s+=final[i];
        }
        return s;
    }
};