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
    vector<int>in(TreeNode* root)
    {
        vector<int>ans;
        TreeNode*temp=root;
        stack<TreeNode*>s;
        while(true)
        {
            if(temp!=NULL)
            {
                s.push(temp);
                temp=temp->left;
            }
            else
            {
                if(s.empty())
                {
                    break;
                }
                temp=s.top();
                s.pop();
                ans.push_back(temp->val);
                temp=temp->right;
            }
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }

    TreeNode* increasingBST(TreeNode* root) 
    {
        if(root==NULL)
        {
            return NULL;
        }
        vector<int>v;
        v=in(root);
        int res=v[0];
        TreeNode* res1=new TreeNode(res);
        TreeNode* node=res1; 
        for(int i=1;i<v.size();i++)
        {
            TreeNode*curr=new TreeNode(v[i]);
            node->right=curr;
            node=curr;
            
        }
        return res1;        
    }
};