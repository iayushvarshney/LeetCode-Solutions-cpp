class Solution {
public:
    int balancedStringSplit(string s) {
        int temp=0, res=0;
        
        for(char c: s){
            if(c=='L') temp++;
            else temp--;
            
            if(temp==0) res++;
        }
        
        
        return res;
    }
};
