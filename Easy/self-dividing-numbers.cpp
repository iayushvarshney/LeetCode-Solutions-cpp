class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int num,temp,count,dig;
        
        vector<int> res;
        
        for(num=left ; num<=right ; num++){
            temp=num;
            count=1;
            while(temp!=0){
                dig=temp%10;
                if(dig==0){
                    count=0;
                    break;}
                           
                if(num%dig!=0){
                    count=0;
                    break;}
                else
                    temp/=10;
            }
            if(count==1) res.push_back(num);
        }
        
        
        return res;
        
    }
};
