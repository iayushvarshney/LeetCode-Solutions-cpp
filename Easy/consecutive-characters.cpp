class Solution {
public:
    int maxPower(string s) {
        
     int i=0,n=s.length()-1,ans=1,c;
        while(i<n){
            c=1;
            while(s[i]==s[i+1])c++,i++; //count how many are same
            ans=max(ans,c); //max check
            i++;
        }
        return ans;
    }
};
