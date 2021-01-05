class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int n=arr.size();
        int ans=-1;
        unordered_map<int, int> map;
        
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        
        for(auto num: map){
            if(num.second == num.first)
                ans=max(num.first, ans);
        }
        
    return ans;
    }
};
