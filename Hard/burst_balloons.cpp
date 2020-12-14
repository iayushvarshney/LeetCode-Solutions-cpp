class Solution { // BEST: DP; Time/Space:  O(N^3)
public:
    int maxCoins(vector<int>& nums) {
        const int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);        
        //vector<vector<int> > d(n+2, vector<int>(n+2, 0));
        //constexpr int len = 500;
        const int len = 500;
        int d[len+2][len+2]={0};   // quick to code     
        for(int l = 1; l <= n; l++)
            //for(int i = 1; i <= n -l + 1; i++){
            for(int i = 1; i + l - 1 <= n; i++){
                int j = i + l - 1; // j-i == l - 1
                for(int k = i; k <= j; k++)
                    d[i][j] = max(d[i][j], d[i][k-1] + nums[i-1]*nums[k]*nums[j+1] + d[k+1][j]  );                
            }        
        return d[1][n];
    }
};
