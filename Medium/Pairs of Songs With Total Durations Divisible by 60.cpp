class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int rem[60], i, count=0;
        
        for( i=0 ;i<60 ; i++) rem[i]=0;
        
        for(auto j : time){
            rem[j%60]++;
        }
        
        for( i=1 ;i<30 ; i++) count+=rem[i]*rem[60-i];
        
        count += rem[0] * (rem[0] - 1) / 2 + rem[30] * (rem[30] - 1) / 2;
        return count;
    }
    
};
