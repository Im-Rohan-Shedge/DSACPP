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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode *curr = head;
        ListNode *curr2=curr;
        
        while(curr->next!=nullptr){
            curr2=curr->next;
            if(curr->val==curr2->val){
                curr->next=curr2->next;
                continue;
            }
            curr=curr->next;
        }
       
        return head;
    }
};