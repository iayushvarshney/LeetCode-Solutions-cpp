// GitHub.com/iayushvarshney

class Solution {
public:
    int reverse(int x) {
         int ans = 0;
    while (x) {
        if (abs(ans) > 214748364.7)
            return 0;
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
    }
};
