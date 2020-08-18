// GitHub.com/iayushvarshney

class Solution {
public:
    bool isPalindrome(int x) {
        
       long int res=0,dig,temp;
        
        temp=x;
        
        if(x<0)
            return false;
        
        while(x){
            dig=x%10;
            res*=10;
            
            res+=dig;
            
            x/=10;
        }

        
        if(res==temp)
            return true;
        else
            return false;
    }
};
