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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* c1=headA;
        ListNode* c2=headB;
        int a=0;int b=0;
        while(c1!=NULL)
        {
            a++;
            c1=c1->next;
        }
        while(c2!=NULL)
        {
            b++;
            c2=c2->next;
        }
        int d=abs(a-b);
        //cout<<d;
        ListNode* t1=headA;
        ListNode* t2=headB;
        if(a>b)
        {
            while(d--)
            {
                t1=t1->next;
            }
        }
        else 
        {
            while(d--)
            {
                t2=t2->next;
            }
        }
        //cout<<t1->val<<" "<<t2->val;
        while(t1!=NULL && t2!=NULL)
        {
            if(t1==t2)
            {
                return t1;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;    
    }
};