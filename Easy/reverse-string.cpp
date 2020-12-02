class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int l=s.size();
        
   
        
        for(int i=0, j=l-1 ; i<=l/2, j>=l/2 ; i++,j--){
            swap(s[i],s[j]);
        }
        

        
    }
};
