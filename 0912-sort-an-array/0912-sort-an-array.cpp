class Solution {
    private:   

        void merge(vector<int>& nums, int s, int e){
            int mid = (s+e)/2;

            int len1 = mid - s +1;
            int len2 = e - mid;

            int *first = new int[len1];
            int *second = new int[len2];

            //copy values
            int mainArrayIndex =s;
            for(int i=0; i<len1; i++){
                first[i] = nums[mainArrayIndex++];
            }
            
            mainArrayIndex = mid+1; 
            for(int i=0; i<len2; i++){
                second[i] = nums[mainArrayIndex++];
            }

            //merge back
            int index1 =0;
            int index2 =0;
            mainArrayIndex = s;

            while(index1 < len1 && index2 < len2){

                if(first[index1] < second[index2]){
                    nums[mainArrayIndex++]  = first[index1++];
                }else{
                    nums[mainArrayIndex++] = second[index2++];
                }

            }

            while(index1 < len1){
                nums[mainArrayIndex++]  = first[index1++];
            }
            while(index2 < len2){
                nums[mainArrayIndex++] = second[index2++];
            }


        }

        void solve(vector<int>& nums, int s, int e){

            //base case
            if(s >= e)
                return;

            int mid = (s+e)/2;

            //sort right part
            solve(nums, s, mid);
            //sort left part
            solve(nums, mid+1 ,e);

            merge(nums,s,e);

        }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n  = nums.size();
        solve(nums,0,n-1);
        return nums;
    }
};