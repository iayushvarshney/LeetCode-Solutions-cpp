class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int k=0 ;k<arr.size();k++){
            if(arr[k]!=0) break;
            else return true; }
        
        for(int i=0 ; i<arr.size();i++){
            
            for(int j=0 ;j<arr.size() ; j++){
                
                if(arr[j]==0) continue;
                
                if(arr[j]==arr[i]*2){
                    return true; }
            }
        }
        
        
        
        return false;
        
    }
};
