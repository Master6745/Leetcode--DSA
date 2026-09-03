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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp->next){
            cnt++;
            temp=temp->next;
        }
        int i=0;
        temp=head;
        while(i<(cnt/2)){
            temp=temp->next;
            i++;

        }
        if(cnt%2!=0)return temp->next;
        return temp;
        
    }
};