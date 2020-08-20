// GitHub.com/iayushvarshney

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i,j,count=0;
        
        for(i=0 ; J[i]!='\0' ; i++){
            for(j=0 ; S[j]!='\0' ; j++){
                if(J[i]==S[j])
                    count++;
            }
        }
        
        return count;
    }
};
