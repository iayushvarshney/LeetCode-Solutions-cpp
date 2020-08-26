class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j,count;
        vector<int> res;
        
        for(i=0 ; i<nums.size() ; i++){
            count=0;
            for(j=0 ; j<nums.size() ; j++){
                if(nums[i]>nums[j])
                    count++;
            }
            res.push_back(count);
        }
        
        return res;
    }
};
