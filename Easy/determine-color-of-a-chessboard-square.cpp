class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((int(coordinates[0])-96)%2==0){
            if(int(coordinates[1])%2==0) return false;
            
        }
        else{
            if(int(coordinates[1])%2!=0) return false;
        }
        
        
        return true;
        
    }
};
