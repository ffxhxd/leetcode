class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return NULL;

        //non empty list;
        ListNode* current = head;

        while(current != NULL){
            if(current->next != NULL && current->val == current->next->val){
                ListNode* next_next = current->next->next;
                ListNode* nodeToDelete = current->next;
                delete nodeToDelete;
                current->next = next_next;
            }
            else{
                current =  current->next;
            }
        }
        return head;
    }
};