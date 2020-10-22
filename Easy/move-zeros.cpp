class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        
        for(int i=0;i<nums.size() ; i++){
            if(nums[i]!=0){
               nums[k++]=nums[i];
            }
        }
        
        for(int x=k ; x<nums.size() ; x++)
            nums[x]=0;
        
    }
};
