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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* curr=head;

        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        int m=c/2;
        while(m--)
        {
            head=head->next;
        }
        return head;
    }
};