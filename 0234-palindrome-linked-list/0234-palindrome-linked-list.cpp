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
    bool isPalindrome(ListNode* head) {
        
        vector<int> arr;
        
        ListNode* temp = head;
        int size = 0;
        
        while(temp != NULL){
            
            temp = temp->next;
            size++;
            
        }
        
        ////////////////////////////////////
        temp = head;
        
        while(temp != NULL){
        for(int i =0; i<size; i++){
            
            arr.push_back(temp->val);
            temp = temp->next;
            
            } 
        }
      
        /////////////////////////////
        //check pal
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            if (arr[left] != arr[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;

    }
};




















