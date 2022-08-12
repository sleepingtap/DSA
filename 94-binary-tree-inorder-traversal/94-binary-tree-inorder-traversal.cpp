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
    void in(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        in(root->left,ans);
        ans.push_back(root->val);
        in(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
        in(root,ans);
        return ans;
        // TreeNode* node=root;
        // vector<int>ans;
        // stack<TreeNode*>s;
        // while(true)      // as stack is already empty
        // {
        //     if(node!=NULL)
        //     {
        //         s.push(node);
        //         node=node->left;
        //     }
        //     else
        //     {
        //         if(s.empty())
        //         {
        //             break;
        //         }
        //         node=s.top();
        //         s.pop();
        //         ans.push_back(node->val);
        //         node=node->right;
        //     }
        // }
        // return ans;
    }
};