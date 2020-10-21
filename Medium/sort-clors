class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i,j,k,count0=0, count1=0, count2=0;
        
        for(int it=0 ; it<nums.size() ; it++){
            if(nums[it]==0) count0++;
            else if(nums[it]==1) count1++;
            else if(nums[it]==2) count2++;
        }
        
        for( i=0; i<count0 ; i++){
            nums[i]=0;
        }
        
        for(j=i; j<count0+count1 ; j++){
            nums[j]=1;
        }
        
        for(k=j; k<count0+count1+count2 ; k++){
            nums[k]=2;
        }
            
        
    }
};
