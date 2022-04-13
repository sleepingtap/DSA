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
        int flag=0,index=0;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>levels(n);
       
            
                for(int i=0;i<n;i++)
                {
                    TreeNode *temp=q.front();
                    q.pop();
                    
                    if(flag==0)
                    {
                         index=i;
                    }
                    else
                    {
                        index=n-i-1;
                    }
                    if(temp->left!=NULL)
                    {
                        q.push(temp->left);
                    }
                     if(temp->right!=NULL)
                    {
                        q.push(temp->right);
                    }
                    
                     levels[index]=(temp->val);
                
                }
            
    
            flag=!flag;
            ans.push_back(levels);
        }
        return ans;
    }
};