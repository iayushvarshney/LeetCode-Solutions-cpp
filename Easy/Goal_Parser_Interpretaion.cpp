class Solution {
public:
    string interpret(string command) {
        string res;
        
        for(int i=0; command[i]!='\0' ; i++){
            if(command[i]=='G') {
                res.push_back('G'); } 
            else if(command[i]=='(' && command[i+1]==')'){
                res.push_back('o');
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                res.push_back('a');
                res.push_back('l');
                i+=3;
            }
        }
        
        
        return res;
    }
};
