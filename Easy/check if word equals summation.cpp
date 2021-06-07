class Solution {
public:
    int toint(string s){
        int res=0, temp, x=0;
        
        for(int i=s.size()-1 ; i>=0 ; i--){
            temp=int(s[i])-97;
            
            res+=((pow(10,x++))*temp);
           
        }
    
     return res;
}
    
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a,b,c;
        
        a = toint(firstWord);
        b = toint(secondWord);
        c = toint(targetWord);
        
        if(c == a+b) return true;
        
        return false;
    }
};
