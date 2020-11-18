class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        
        for(int i = 0, len = a.size(); i < len; ++i) {
            int start = a[i][0];
            int end   = a[i][1];
            while(i < len-1 && end >= a[i+1][0])    end = max(end, a[++i][1]);
            ans.push_back({start, end});            
        }
        
        return ans;
    }
};
