// GitHub.com/iayushvarshney

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0, res=0;
        
        for(int i=0 ; i<nums.size() ; i++){
            while(nums[i]!=0){
                nums[i]/=10;
                count++;}
            
            if(count%2==0){
                res++;
            }
              count=0;  
            }
        
        return res;
        }
       
        
    };
