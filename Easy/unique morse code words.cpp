class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        unordered_map<string,int>mp;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto it:words)
        {
            string s="";
            for(int i=0;i<it.size();i++)
            {
                int index=it[i]-97;
                s=s+v[index];
            }
            mp[s]++;
        }
        return mp.size();
    }
};
