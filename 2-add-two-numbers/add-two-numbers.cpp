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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* l3=new ListNode();
        ListNode* head=l3;
        int rem=0,t=0;
        while(temp1!=nullptr ||temp2!=nullptr){
            int x=0,y=0;
            if(temp1 !=nullptr)x=temp1->val;
            if(temp2 !=nullptr)y=temp2->val;
        
        
            t=x+y+rem;
            rem=t/10;
            l3->val=(t%10);
           
            if(temp1!=nullptr)temp1=temp1->next;
            if(temp2!=nullptr)temp2=temp2->next;
            if(temp1!=nullptr ||temp2!=nullptr||rem>0){
                l3->next=new ListNode();
                
                l3=l3->next;
                l3->val=rem;
            }

            
            
        }
        return head;
    }   
    
};