class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x,y;
        
        x=0;
        y=n;
        
        vector<int> res;
        
    
        for(int i=0;i<2*n ;i++){
            if(i%2==0)
                res.push_back(nums[x++]);
            else
                res.push_back(nums[y++]);
            
            }
        
        return res;
    }
    
};
