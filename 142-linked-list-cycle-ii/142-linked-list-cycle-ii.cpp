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
    ListNode *detectCycle(ListNode *head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        int f=0;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            return NULL;
        }
        else
        {
            ListNode* temp=head;
            if(slow==temp)
            {
                return slow;
            }
            while(temp!=slow)
            {
                //index++;
                slow=slow->next;
                temp=temp->next;
            }
            
        }
        return slow;
    }
};