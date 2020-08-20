class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length();
        int l2=b.length();
        if(l1>l2)
            for(int i=0;i<l1-l2;i++)
                b='0'+b;
        if(l1<l2)
            for(int i=0;i<l2-l1;i++)
                a='0'+a;
         
        int c=0; 
       for(int i=a.length()-1;i>=0;i--)
       {
           int s=(a[i]-'0')+(b[i]-'0')+c;  
           c=s/2; s=s%2;
           a[i]=char(s+'0'); 
               
       }
        if(c==1) a='1'+a; 
        return a;
    }
};
