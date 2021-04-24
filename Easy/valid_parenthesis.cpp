class Solution {
public:
    char opp(char x){
        switch(x){
            case '(': return ')';
           
            case '{': return '}';
            case '[': return ']';
                  }
        
        return 0;
    }
    
    bool isValid(string s) {
        stack<char> stack;
        for( char i: s){
            if(stack.empty()){
                stack.push(i); }
            else{
               
                if(i==opp(stack.top())){
                    stack.pop();
                }
                else
                    stack.push(i);
            }
        }
        
        if(stack.empty()) return true;
        else return false;
        
    }
};
