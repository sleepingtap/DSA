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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        ListNode* temp=head;
        int c=0;
        while(curr!=NULL)
        {
            
            c++;
            curr=curr->next;
            
        }
         
        int a=c-n;
        if(a==0)
            return head->next;
        
        while(a-1!=0)
        {
            temp=temp->next;
            a--;
        } 
        temp->next=temp->next->next;
        return head;
    }
};