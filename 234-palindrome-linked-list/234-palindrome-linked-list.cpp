/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        if(head->next==NULL)
        {
            return true;
        }
        ListNode* temp=head;
        int a=0;
        while(temp!=NULL)
        {
            a++;
            temp=temp->next;
        }
        ListNode* curr=head;
        ListNode* curr1=head;
        ListNode* prev=NULL;
        ListNode* next1=NULL;

        for(int i=0;i<a/2;i++)
        {
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        head->next=next1;
        
        ListNode* node=prev;
       if(a%2==0)
       {
           while(next1!=NULL)
            {
                 cout<<node->val<<" "<<next1->val;
                if(node->val!=next1->val)
                {
                    return false;
                }
                next1=next1->next;
                node=node->next;
            }
            return true;
       }
        else
        {
            ListNode* t=next1->next;
            while(t!=NULL)
            {
                 
                if(node->val!=t->val)
                {
                    return false;
                }
                t=t->next;
                node=node->next;
            }
            return true;
        }
    }
};