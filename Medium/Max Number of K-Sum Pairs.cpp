class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        int res = 0;
        for (auto n : nums)
            if (n < k)
                counter[n]++;
            
        for (auto [a, cnt] : counter)
            if (counter.count(k - a))
                res += min(counter[k - a], cnt);
    
        return res/2;
    }
};
