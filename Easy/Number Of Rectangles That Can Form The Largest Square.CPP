class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int t, count=0;
        
        vector<int> res;
        
        for(int i=0;i<rectangles.size() ; i++){
                res.push_back(min(rectangles[i][0],rectangles[i][1]));
            }
        
        int max= *max_element(res.begin(), res.end());
        
        for(int k: res){
            if(k==max) count++;
        }
        
        return count;
        
        }
        
    
};
