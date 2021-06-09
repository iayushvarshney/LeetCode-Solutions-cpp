class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int tobe, count=0;
        
        if( ruleKey == "type") tobe=0;
        else if( ruleKey == "color") tobe=1;
        else tobe=2;
        
        for(int i=0 ; i<items.size() ; i++){
            if(items[i][tobe]==ruleValue) count++;
        }
        
        return count;
        
    }
};
