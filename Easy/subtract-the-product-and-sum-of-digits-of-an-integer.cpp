class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, pro=1,res;
        if(n==0) return 0;
        
        while(n>0){
            sum+=(n%10);
            pro*=(n%10);
            n/=10;
        }
        
        res=pro-sum;
        
        return res;
    }
};
