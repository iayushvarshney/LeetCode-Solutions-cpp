class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        double res=0;
        int str = 0.05 * arr.size();
        
        for(int i=str ; i<arr.size()-str ; i++) res+=arr[i];
        
        res/=(arr.size()*0.9);
        
        return res;
        
    }
};
