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
        ListNode* curr=head;
        ListNode* temp=head;
        int a=0;
        while(curr!=NULL)
        {
            a++;
            curr=curr->next;
        }
        int c=a-n-1;
        if(a==n)
        {
            return head->next;
        }
        while(c--)
        {
            temp=temp->next;
        }

        temp->next=temp->next->next;
        return head;
    }
};