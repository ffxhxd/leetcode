class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //TLE TLE TLE TLE TLE TLE TLE
        // int ans;
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j =i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //            ans = nums[i];
        //         }
        //     }
        // }
        // return ans;

        

    int slow = nums[0];
    int fast = nums[0];

    // Move slow pointer one step and fast pointer two steps until they meet
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Find the entry point of the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
    
    }
};