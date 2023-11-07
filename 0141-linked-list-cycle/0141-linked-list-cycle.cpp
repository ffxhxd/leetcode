class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if(head == NULL)
        //     return false;

        // map<ListNode*, bool> visited;
        // ListNode* temp = head;

        // while(temp != NULL){

        //     if(visited[temp] == true)
        //         return true;
            
        //     visited[temp] = true;
        //     temp = temp->next;

        // }

        // return false;
        ListNode* fast = head;
        ListNode* slow = head;

        if(head == NULL || head->next == NULL){
            return false;
        }

        while(slow != NULL && fast != NULL){

            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }

            slow =  slow->next;

            if(slow == fast)
                return 1;
        }
        return false;
    }
};