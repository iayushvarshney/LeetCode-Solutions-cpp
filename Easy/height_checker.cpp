class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        
        vector<int> temp;
        
        int count=0;
        
        temp= heights;
        sort(heights.begin(), heights.end());
        
        for(int i=0 ; i<heights.size() ; i++)
            if(heights[i]!=temp[i]) count++;
        
        return count;
        
    }
};
