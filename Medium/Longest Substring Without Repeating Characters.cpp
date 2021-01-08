int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int i, j, len = INT_MIN;
        i=0, j=0;
        if(s.size()==0)
            return 0;
        
        while(j < s.size())
        {
            if(umap[s[j]] > 0)      // if char is present in the map, start removing chars from ith index
            {
                umap[s[i]]--;
                i++;
            }
           else if(j<s.size() && umap[s[j]] == 0)   // keep adding chars in map as long as it's freq=0
            {
                umap[s[j]]++;
                j++;
            len = max(len, j-i);    // find new length
            }
               
        }
        return len;
    }
