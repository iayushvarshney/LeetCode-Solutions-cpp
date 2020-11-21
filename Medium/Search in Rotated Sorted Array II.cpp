class Solution {
public:
    
    bool helper(vector<int> &nums,int s,int e,int target)
    {
        if(s>e)
        {
            return false;
        }
        
        int mid=s+(e-s)/2;
        
        if(nums[mid]==target)
        {
            return true;
        }
        
        
        if(nums[mid]<=nums[e])
        {
            bool x=false;
            bool y=false;
            
            if(target>=nums[mid] and target<=nums[e])
            {
                x=helper(nums,mid+1,e,target);
            }
            else
            {
                y=helper(nums,s,mid-1,target);
            }
            
            if(x or y) return true;
        }
        
        if(target<=nums[mid] and target>=nums[s])
        {
            return helper(nums,s,mid-1,target);
        }
        
        return helper(nums,mid+1,e,target);
        
    }
    
    bool search(vector<int>& nums, int target) {
        
        return helper(nums,0,nums.size()-1,target);
        
    }
};
