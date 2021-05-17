class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26];
        
        for(char i: sentence) arr[(int)i-97] = 1;
        
        for(int k: arr){
            if(k!=1) return false;
        }
        
        
        return true;
        
    }
};
