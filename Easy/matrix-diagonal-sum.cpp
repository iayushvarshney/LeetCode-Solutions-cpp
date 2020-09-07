class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,sum=0;
        
        for(i=0 ;i<mat.size();i++){
            for(j=0;j<mat[i].size();j++){
                
                if(i==j)
                    sum+=mat[i][j];
                else if(i==((mat.size()-j)-1))
                    sum+=mat[i][j];
            }
        }
        
        
        return sum;
        
    }
};
