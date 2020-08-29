class Solution {
public:
    int maxArea(vector<int>& height) {
        int left, right;
        int max = 0;
        int high = 0;
        int wide = 0;
        int area = 0;
        
     
        left = 0;
        right = height.size() -1;
        
        
        while(left < right) {
            // Getting the wide
            wide = right - left;
            
            // Getting the height
            if( height[left] <= height[right] ) {
                high = height[left];
                ++left;
            } else {
                high = height[right];
                --right;
            }
            
            // Getting the area
            area = wide * high;
            
            // Calculating the max area
            max = (max < area ? area : max);
        }
        
        return max;
    }
};
