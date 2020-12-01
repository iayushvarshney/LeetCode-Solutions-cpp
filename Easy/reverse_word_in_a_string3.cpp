class Solution {
public:
    string reverseWords(string s) {
        string res;
        int point = 0;
        
        for(int i=0 ; i<=s.length() ; i++){
             if(isspace(s[i])!=0  || i==s.length()){
                 for(int j=i-1 ; j>=point ; j--){
                     res.push_back(s[j]);
                 } point = i+1;
                 if(i!=s.length())
                 res.push_back(' ');
             }
            
            
        }
        
        
        return res;
        
    }
};
