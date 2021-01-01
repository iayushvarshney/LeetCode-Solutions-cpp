class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxA = 0;
        for(int i = 0; i < heights.size(); i++)
            if(i==heights.size() - 1 || heights[i] > heights[i+1])
                for(int j = i, minHeight = heights[i]; j >=0; j--){
                    minHeight = min(minHeight, heights[j]);
                    maxA = max(maxA, minHeight * (i -j + 1));
                }
        return maxA;
    }
};
