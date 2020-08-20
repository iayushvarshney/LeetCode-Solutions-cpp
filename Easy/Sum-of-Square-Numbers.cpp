class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)
            return true;
        for(long i=1;i*i<=c;i++)
        {
            long a = c-i*i;
            long b = sqrt(a);
            if(b*b==a)
                return true;
        }
        return false;
        
    }
};
