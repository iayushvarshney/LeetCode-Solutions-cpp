class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int left=2;
        
        if(nums.size()==0) return 0;
        
        if(nums.size()==1) return nums[0];
        
        for(int right=2; right<nums.size() ; right++)
            if(nums[left-2]!= nums[right]){
                nums[left++]=nums[right];            }
        
        
        return left;
        
        
    }
};
