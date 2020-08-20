class Solution {
public:
    int addDigits(int num) {
        int res;
        if(num==0)
            return 0;
        
        res=1+((num-1)%9);
        
        return res;
    }
};
