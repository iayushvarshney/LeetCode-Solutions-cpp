class Solution {
public:
    int thirdMax(vector<int>& nums) {
       // Sort in reverse order
        sort(nums.begin(), nums.end(), greater());
        
        // Remove duplicates
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i-1])
            {
                nums.erase(nums.begin() + i);
		// Go back to check for more duplicates of the same number
                i--;
            }
        }
        
        // Return 1st max if nums size is 2
        if (nums.size() == 2)
            return nums[0];
        
        // Otherwise return 3rd max number in array
        return nums[2];
                 
        
        
    }
};
