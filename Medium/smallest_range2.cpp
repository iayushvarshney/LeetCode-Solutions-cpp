class Solution { // Greedy Solution:
public:
    int smallestRangeII(vector<int>& A, int K) {
        const int n = A.size();
        sort(A.begin(), A.end());
        int mx = A.back(), mn = A.front(), res = mx - mn;
        for(int i = 0; i < n - 1; i++){
            mx = max(mx, A[i] + 2* K);
            mn = min(A[i+1], A[0] + 2*K);
            res = min(res, mx - mn);
        }
        return res;
    }
};
