class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int r,c, count=0;
        
        for(int i=0 ; i<board.size() ; i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        
        //----------------left direction check
        for(int x=c; x>0 ;x--){
            if(board[r][x]=='p'){
                count++;
                break;
            }
            else if(board[r][x]=='B') break;
        }
        
        //----------------right direction check
        for(int x=c; x<board[0].size() ;x++){
            if(board[r][x]=='p'){
                count++;
                break;
            }
            else if(board[r][x]=='B') break;
        }
        
        //----------------up direction check
        for(int x=r; x>0 ; x--){
            if(board[x][c]=='p'){
                count++;
                break;
            }
            else if(board[x][c]=='B') break;
        }
        
        //----------------down direction check
        for(int x=r; x<board.size() ;x++){
            if(board[x][c]=='p'){
                count++;
                break;
            }
            else if(board[x][c]=='B') break;
        }
        
        
        return count;
        
    }
};
