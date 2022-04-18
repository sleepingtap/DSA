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
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>v;
        v=in(root);
        return v[k-1];
    }
};