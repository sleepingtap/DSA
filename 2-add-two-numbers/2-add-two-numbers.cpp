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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* len1=l1;
        ListNode* len2=l2;
        // ListNode* dummy=new ListNode(-1);
        // ListNode* temp=dummy;
        int a=0;int b=0;
        while(len1!=NULL)
        {
            a++;
            len1=len1->next;
        }
        while(len2!=NULL)
        {
            b++;
            len2=len2->next;
        }
        if(a>b)
        {
            int carry=0;
            ListNode* curr1=l1;
            ListNode* curr2=l2;
            ListNode* prev=NULL;

            while(curr1!=NULL && curr2!=NULL)
            {
                curr1->val+=(curr2->val+carry);
                carry=0;
                if(curr1->val>9)
                {
                    carry=(curr1->val)/10;
                    curr1->val=(curr1->val)%10;
                }
                prev=curr1;
                curr1=curr1->next;
                curr2=curr2->next;
            }
            while(curr1!=NULL)
            {
                curr1->val+=carry;
                carry=0;
                if(curr1->val>9)
                {
                    carry=curr1->val/10;
                    curr1->val=curr1->val%10;
                }

                prev=curr1;
                curr1=curr1->next;
            }


                while(carry!=0)
                {
                    ListNode* node=new ListNode(carry%10);
                    prev->next=node;
                    prev=prev->next;
                    carry=carry/10;

                }

            return l1;
        }
        else 
        {
            int carry=0;
            ListNode* curr1=l2;
            ListNode* curr2=l1;
            ListNode* prev=NULL;
            
            while(curr1!=NULL && curr2!=NULL)
            {
                curr1->val+=(curr2->val+carry);
                carry=0;
                if(curr1->val>9)
                {
                    carry=curr1->val/10;
                    curr1->val=curr1->val%10;
                }
                prev=curr1;
                curr1=curr1->next;
                curr2=curr2->next;
            }
            while(curr1!=NULL)
            {
                curr1->val+=carry;
                carry=0;
                if(curr1->val>9)
                {
                    carry=curr1->val/10;
                    curr1->val=curr1->val%10;
                }
                prev=curr1;
                curr1=curr1->next;
            }

                while(carry!=0)
                {
                    ListNode* node=new ListNode(carry%10);
                    prev->next=node;
                    prev=prev->next;
                    carry=carry/10;

                }

            return l2;
        }

        
        return NULL;
    }
};