//Code Source: https://github.com/iayushvarshney

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> Res;
        int max=candies[0],temp;
        for( int i=0 ; i<candies.size() ; i++){
            if(candies[i]>max)
                max=candies[i];
            }
        
        for(int j=0; j<candies.size() ; j++){
            temp=candies[j];
            temp+=extraCandies;
            
            if(temp>=max)
                Res.push_back(true);
            else
                Res.push_back(false);
            
        }

        
        return Res;
        
    }
};
