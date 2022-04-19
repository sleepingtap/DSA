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
    TreeNode * first =new TreeNode();
    TreeNode* second= new TreeNode();
    void search(TreeNode* root,int x,int y){
        if(root==NULL )
            return;
        search(root->left,x,y);
        if(root->val==x)
            first=root;
        if(root->val==y)
            second=root;
        search(root->right,x,y);
    }
    
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
        //cout<<ans;
        return ans; 
        
    }
    // void in(TreeNode* root,vector<int> & v1){
    //     if(root==NULL)
    //         return;
    //     in(root->left,v1);
    //     v1.push_back(root->val);
    //     in(root->right,v1);
    // }
    void recoverTree(TreeNode* root) 
    {
        vector<int>v1,v2;
        //in(root,v1);
        v1=in(root);
         int x=0;
         int y=0;
        v2=v1;
        sort(v2.begin(),v2.end());
        for(auto it: v1)
            cout<<it<<" ";
        
        cout<<endl;
        for(int i=0;i<v1.size()-1;i++)
        {
            if(v1[i]!=v2[i])
            {
                x=v1[i];
                y=v2[i];
                break;
            }
        }
        cout<<x<<" "<<y;
        search(root,x,y);
        
        int temp=first->val;
        first->val=second->val;
        second->val =temp;
    }
};