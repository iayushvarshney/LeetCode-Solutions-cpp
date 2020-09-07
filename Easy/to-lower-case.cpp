class Solution {
public:
    string toLowerCase(string str) {
        
        int i;
        
        for(int i=0;str[i]!='\0';i++){
            
            if(str[i]>=65 && str[i]<=92)
           str[i]+=32; 
        }
        
        return str;
    }
};
