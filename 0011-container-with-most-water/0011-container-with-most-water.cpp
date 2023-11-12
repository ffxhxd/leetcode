class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0;

        int start = 0;
        int end = height.size() -1;

        while(start < end){
            int width = end - start;
            int h = min(height[start], height[end]);

            maxArea = max(maxArea, width*h);

            if(height[start] < height[end])
                start++;
            else
                end--;    

        }
        return maxArea;
    }
};