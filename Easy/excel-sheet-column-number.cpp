class Solution {
public:
    int titleToNumber(string s) {
        
        int power, res=0, n=0;
        
        for ( int i = s.length()-1 ; i>=0 ; i--){
            power = (int)s[i]-64;
            res += ( pow(26,n++)*power ); 
        }
        
        
        return res;
        
    }
};
