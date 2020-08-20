// GitHub.com/iayushvarshney

class Solution {
public:
    
string defangIPaddr(string address) {
        vector<char> defangIP;
        
        for(auto chars : address){
            if(chars == '.') defangIP.push_back('[');
            defangIP.push_back(chars);
            if(chars == '.') defangIP.push_back(']');
        }
        
        string s(defangIP.begin(), defangIP.end());
        
        return s;
    }

};
