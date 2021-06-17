class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int count = 0;
        for( auto it:s ){
            if( it == ' ' ) count++;
            if( count == k ) break;
            ans += it;
        }
        return ans;
    }
};
