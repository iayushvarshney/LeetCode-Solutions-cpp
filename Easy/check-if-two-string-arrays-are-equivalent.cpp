class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string full1, full2;
        
        for(auto i: word1) full1 += i;
        
        for(auto j: word2) full2 += j;

        return full1 == full2;
        
    }
};
