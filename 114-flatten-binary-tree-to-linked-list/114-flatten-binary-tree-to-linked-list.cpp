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
    void flatten(TreeNode* root) 
    {
        if(root==NULL)
        {
            return;
        }
        stack<TreeNode*>s;
        s.push(root);
        TreeNode* node=NULL;
        while(!s.empty())
        {
            node=s.top();
            s.pop();
            
            if(node->right)
            {
                s.push(node->right);
            }
            if(node->left)
            {
                s.push(node->left);
            }
            if(!s.empty())
            {
                node->right=s.top();
            }
            else
            {
                node->right=NULL;
            }
            node->left=NULL;
        }
        root=node;   
    }
};