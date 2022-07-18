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
        ListNode* temp=head;
        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        int a=c/2;
        while(a!=0)
        {
            temp=temp->next;
            a--;
        }
     //   temp=temp->next;
        return temp;
    }
};