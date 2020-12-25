class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int sum=0;
        for(int i=0;i<rows;i++){
            int nbe=0;int index;
            for(int j=0;j<cols;j++){
                if(mat[i][j]==1){
                    nbe++;
                    index=j;
                }    
                if(nbe>1)break;
            }
            if(nbe==1){
                for(int k=0;k<rows;k++){
                    if(mat[k][index]==1)nbe--;
                }
                if(nbe==0)sum++;
            }
        }
        return sum;
    }
};
