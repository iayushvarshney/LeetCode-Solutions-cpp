class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;
        int T=0, i;
        int B=matrix.size()-1;
        int L=0;
        int R=matrix[0].size()-1;
        int d=0;
        
        if(matrix.empty()) return {};
        
        while(T<=B && L<=R){
            if(d==0){
                for( i=L ; i<=R ; i++)
                            res.push_back(matrix[T][i]);
                            T++;
                            
            }
            else if(d==1){
                for( i=T ; i<=B ; i++)
                            res.push_back(matrix[i][R]);
                            R--;
                        
            }
            else if(d==2){ 
                for( i=R ; i>=L ; i--)
                            res.push_back(matrix[B][i]);
                            B--;
                        
            }
            else{
              for( i=B ; i>=T ; i--)
                            res.push_back(matrix[i][L]);
                            L++;
                        
            }
                d=(d+1)%4;
        } 
            
            return res;
            
        
    }
};
