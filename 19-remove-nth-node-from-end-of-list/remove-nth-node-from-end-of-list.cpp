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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){temp=temp->next;cnt++;}
        if(n==cnt){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        temp=head;
        for(int i=1;i<cnt-n;i++){
            temp=temp->next;
        }
        ListNode* todel=temp->next;
        temp->next=temp->next->next;
        delete todel;
        return head;
        
        

        
    }
};