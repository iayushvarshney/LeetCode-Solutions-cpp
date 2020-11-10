   static const vector<vector<int>>& flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row : A) {
            reverse(row.begin(), row.end());
            for (int& v : row) v ^= 1;
        }
        return A;
    }
