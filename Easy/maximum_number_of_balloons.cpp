class Solution {
public:
    int maxNumberOfBalloons(string text) {
        const string b = "balon";
        vector<int> m(26, 0);
        for (char c: text)
        {
            if (b.find(c)  < b.length())
            {
                m[c - 'a']++;
            }
        }
        int res = INT_MAX;
        for (char c: b)
        {
            int index = c - 'a';
            if (c == 'l')
            {
                m[index] /= 2;
            }
            if (c == 'o')
            {
                m[index] /= 2;
            }
            res = min(res, m[c - 'a']);
        }
        return res;
    }
};
