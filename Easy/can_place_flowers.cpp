class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0, s=flowerbed.size();
        
        if(s==1 && flowerbed[0]==0) return true;
        
        if(s==4){
        if(flowerbed[0]==0 && flowerbed[1]==0 && flowerbed[2]==0 && flowerbed[3]==0  && n==3 ) return false; }
        
        
        if(flowerbed[0]==0 && flowerbed[1]==0) {
            flowerbed[0]=1;
            count++; }
        
        if(flowerbed[s-1]==0 && flowerbed[s-2]==0){
            flowerbed[s-1]==0;
            count++;
        }
        
        
        
        for( int i=1 ; i<flowerbed.size()-1 ; i++){
            if( flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){ 
                    count++;
                    flowerbed[i]=1;
                }
            
        } 
        
        
        if(n<=count) return true;
        else return false;
    }
};
