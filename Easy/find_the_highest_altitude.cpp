class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0, temp=0;
        
        for(int i=0;i<gain.size() ; i++ ){
            
            temp+=gain[i];
            
            if(temp>max) max=temp;
        }
        
        return max;
        
    }
};
