// GitHub.com/iayushvarshney

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> res;
        int count=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1){
                count++;
                if(i==nums.size()-1)
                    res.push_back(count); }
            else if(nums[i]==0){
                res.push_back(count);
                count=0; } }
            
            
            int max=res[0];
            for(int j=0; j<res.size() ;j++){
                if(res[j]>max)
                    max=res[j];
            }
        
        
            
            return max;
                
        }
        
    };
