class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        
        //minimize max : max = max - k
    //maximize min:  = min + k
    //diff = max - min;
    
    int imin = A[0];
    int imax = A[0];
    
    for (int i =0;i<A.size(); i++){
        imin = min(imin, A[i]);
        imax = max(imax, A[i]);
    }
    
    imin = imin + K;
    imax = imax - K;
    
    int result = max(0, imax - imin);
    
    return result;  
        
        
    }
};
