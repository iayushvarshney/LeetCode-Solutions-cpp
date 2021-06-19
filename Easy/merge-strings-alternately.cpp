class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len=max(word1.size(),word2.size());
        int i=0;
        string s="";
        while(i<len){
            if(i<word1.size()) s+=word1[i];
            if(i<word2.size()) s+=word2[i];
            i++;
        }
        return s;
    }
};
