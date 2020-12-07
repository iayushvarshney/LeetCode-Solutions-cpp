class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0, bottom=n-1, left=0, right=n-1, d=0, i, k=1;
        
        vector<vector <int>> res(n, vector<int>(n,0));
        
        if(n==0) return {};
        
        while(top<=bottom && left<=right){
            if(d==0){
                for(i=left ; i<=right ; i++) res[top][i]=k++;
                top++;
            }
            else if(d==1){
                for(i=top ; i<=bottom ; i++) res[i][right]=k++;
                right--;
                
            }
            else if(d==2){
                for(i=right ; i>=left ; i--) res[bottom][i]=k++;
                bottom--;
            }
            else {
                for(i=bottom ; i>=top ; i--) res[i][left]=k++;
                left++;
            }
            
            d=(d+1)%4;
        }
        
        return res;
        
    }
};
