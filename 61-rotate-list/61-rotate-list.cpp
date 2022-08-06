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
    }
};