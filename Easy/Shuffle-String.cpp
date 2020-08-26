class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string n= s;
        
        for(int i=0 ; s[i]!='\0' ; i++){
            n[indices[i]]=s[i];
        }
        
        return n;
        
    }
};
