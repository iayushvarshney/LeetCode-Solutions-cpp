// GitHub.com/iayushvarshney

class Solution {
public:
    bool isPerfectSquare(int num) {
        int a;
        a=num%10;
        
        switch(a){
            
            case 2:
            case 3:
            case 7:
            case 8: return false;
            default: break;
        }
    
        int temp;
        
        if( num==0 || num==1)
            return true;
        
        for( int i=1 ; i<=num/2 ; i++){
           
            temp=i*i;
            if(temp==num)
                return true;
            if(temp>num)
                return false;
        }
            return false;
        
    }
};
