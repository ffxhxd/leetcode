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
    ListNode* deleteMiddle(ListNode* head) {

         if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next !=  NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = slow->next;
            delete slow;
        } else {
            // If there is no 'prev', it means the head itself was the middle node.
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        return head;
    }
};