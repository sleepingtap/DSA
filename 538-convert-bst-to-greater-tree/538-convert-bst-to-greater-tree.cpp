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
        TreeNode* node=root;
        stack<TreeNode*>s;
        while(true)
        {
            if(node!=NULL)
            {
                s.push(node);
                node=node->left;
            }
            else
            {
                if(s.empty())
                {
                    break;
                }
                node=s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
    
    int bs(int x,vector<int>&v)
    {
        int l=0;
        int h=v.size()-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(v[m]==x)
            {
                return m;
            }
            else if(v[m]>x)
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return -1;
    }
    
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        int x=bs(root->val,v);
        for(int i=x+1;i<v.size();i++)
        {
            root->val+=v[i];
        }
        inorder(root->right,v);
    }
    TreeNode* convertBST(TreeNode* root) 
    {
        vector<int>v;
        v=in(root);
        inorder(root,v);
        return root;
        
        
        
        
    }
};