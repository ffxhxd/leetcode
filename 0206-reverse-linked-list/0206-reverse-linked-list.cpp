class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == NULL){
            head;
        }
       
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};