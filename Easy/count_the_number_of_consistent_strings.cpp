class Solution {
public:
    int countConsistentStrings(const string& allowed, const vector<string>& words) {
        
        vector<bool> letters(26);
        for(int i=0; i<allowed.size(); ++i)
            letters[allowed[i]-'a']=true;
        
        int count=0;
        for(const auto& word:words) {
            int i=0;
            for(; i<word.size(); ++i)
                if(!letters[word[i]-'a']) break;
            if(i==word.size()) ++count;
        }
        
        return count;
    }
};
