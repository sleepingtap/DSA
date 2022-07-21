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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        
        ListNode* prev=NULL;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr=dummy;
        dummy->next = head;
        if(left==right || head==NULL)
        {
            return head;
        }
        for(int i=0;i<left;i++)
        {
            prev=curr;
            curr=curr->next;
        }

        ListNode* a=curr;
        ListNode* b=prev;
        for(int i=left;i<=right;i++)
        { 
            
             ListNode* temp=curr->next;
             curr->next=prev;
             prev=curr;
             curr=temp;
        }
        b->next=prev;
        a->next=curr;
        
        return dummy->next;;
    }
};