/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // ListNode* reverse(ListNode *head)
    // {
    //     ListNode* prev=NULL;
    //     ListNode*curr=head;
    //     ListNode*next=NULL;
    //     while(curr->next!=NULL)
    //     {
    //         next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //     }
    //     return prev;
    // }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* curr=headA;
        ListNode* curr1=headB;
       
        while(curr!=curr1)
        {
            if(curr1==NULL)
                curr1=headA;
            else curr1=curr1->next;
            
            if(curr==NULL)
                curr=headB;
            else curr=curr->next;
        }
        return curr;
    }

};