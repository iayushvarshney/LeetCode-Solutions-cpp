class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int, int>> next_neighbors = {{1, 0}, {0, 1}, {1, 1}, {1, -1}};
        
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                int neighbors = board[i][j] >> 1, value = board[i][j] & 1;
                
                for (pair<int, int> next : next_neighbors)
                {
                    if (i + next.first < 0 || i + next.first >= board.size() ||
                        j + next.second < 0 || j + next.second >= board[i].size())
                        continue;
                    
                    neighbors += (board[i + next.first][j + next.second] & 1);
                    board[i + next.first][j + next.second] += value << 1;
                }
                
                board[i][j] = value == 1 ? neighbors == 2 || neighbors == 3 : neighbors == 3;
            }
        }
    }
};
