// GitHub.com/iayushvarshney

class Solution {
public:
    struct res{
        int a;
        int b;
    };
    vector<int> twoSum(vector<int>& nums, int target) {
      
        vector<int> res;
        int c=0;
        for( int i=0; i<nums.size()-1 ; i++){
            for( int j=i+1 ; j<nums.size() ; j++){
                if(nums[i]+nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    c=1;
                    break;
                }}
                if(c==1)
                    break;
            
        }
        
        return res;
       
    }
        
    };
