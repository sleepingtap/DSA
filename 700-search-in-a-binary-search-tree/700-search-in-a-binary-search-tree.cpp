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
    // vector<TreeNode*>pre(TreeNode* root)
    // {
    //     //vector<TreeNode*>ans;
    //     if(root==NULL)
    //     {
    //         return ans;
    //     }
    //     stack<TreeNode*>s;
    //     s.push(root);
    //     while(!s.empty())
    //     {
    //         TreeNode* temp=s.top();
    //         s.pop();
    //         if(temp->right!=NULL)
    //         {
    //             s.push(temp->right);
    //         }
    //         if(temp->left!=NULL)
    //         {
    //             s.push(temp->left);
    //         }
    //         ans.push_back(temp);
    //     }
    //     return ans;
    // }
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        //TreeNode* res=root;
        if(root==NULL)
        {
            return NULL;
        }
        if(val==root->val)
        {
            return root;
        }
        else if(val<root->val)
        {
             return searchBST(root->left,val);
        }
        else// if(val>root->val)
        {
            return searchBST(root->right,val);
        }
      //  return root;
//         {
//             while(root!=val)
//             {
//                 root=root->left;
//                 if(val>root)
//                 {
//                     break;
//                 }
//             }
            
//         }
        
    }
};