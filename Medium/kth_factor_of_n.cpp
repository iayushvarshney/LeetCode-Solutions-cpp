class Solution {
public:
    int kthFactor(int n, int k) {
        
        vector<int> fact;
        
        fact.push_back(1);
        fact.push_back(n);
        
        for(int i=2 ; i<n ; i++){
            if(n%i == 0) fact.push_back(i);
        }
        
        
        sort(fact.begin() , fact.end());
        
        if(k>fact.size()) return (-1);
        
        return fact[k-1];
        
    }
};
