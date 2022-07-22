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
    ListNode* partition(ListNode* head, int x) 
    {
        ListNode* temp1=new ListNode(-1);
        ListNode* temp2=new ListNode(-1);
        ListNode* curr1=temp1;
        ListNode* curr2=temp2;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                curr1->next=head;
                curr1=curr1->next;
            }
            else
            {
                curr2->next=head;
                curr2=curr2->next;
            }
            head=head->next;
        }
        cout<<curr1->val;
        curr1->next=temp2->next;
        curr2->next=NULL;
        return temp1->next;
       
    }
};