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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        ListNode* curr=head;
        int a=0;
        while(curr!=NULL)
        {
            a++;
            curr=curr->next;
        }
        while(k>a)
        {
            k=k-a;
        }
        ListNode* c=head;
        while(k--)
        {
           
            ListNode* c1=c;
            ListNode* prev=NULL;
            while(c->next!=NULL)
            {
                prev=c;
                c=c->next;
            }
            c->next=c1;
            prev->next=NULL;
        }
        return c;
//         ListNode* c=head;ListNode* c1=head;
//         ListNode* t=NULL;
//         int a=0;
//         while(c!=NULL)
//         {
//             a++;
//             c=c->next;
//         }
//         if(k==a)
//         {
//             return head;
//         }
//         while(c1->next!=NULL)
//         {
//             t=c1;
//             c1=c1->next;
//         }
//         while(k>a)
//         {
//             k=k-a;
//         }
//         cout<<k;
        
//         ListNode* curr=head;
//         ListNode* prev=NULL;
 
//         for(int i=0;i<=k;i++)
//         {
//             prev=curr;
//             curr=curr->next;
//         }
//         if(curr==NULL)
//         {
//             prev->next=head;
//             t->next=NULL;
//             return prev;
//         }
//         ListNode* temp=curr;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=head;
//         prev->next=NULL;
//         return curr;
        
    }
};