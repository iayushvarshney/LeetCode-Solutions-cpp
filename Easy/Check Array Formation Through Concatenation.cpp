class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int startAt[101];
        // populating startAt
        for (int i = 1; i < 101; i++) startAt[i] = -1;
        for (int i = 0, len = pieces.size(); i < len; i++) {
            startAt[pieces[i][0]] = i;
        }
        // parsing arr
        for (int i = 0, len = arr.size(); i < len;) {
            // checking if we do not have a matching chunk
            if (startAt[arr[i]] == -1) return false;
            // verifying the whole chunk matches
            for (int n: pieces[startAt[arr[i]]]) {
                if (n != arr[i]) return false;
                i++;
            }
        }
        return true;
    }
};
