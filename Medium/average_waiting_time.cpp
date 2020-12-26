class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        double fin=customers[0][0]+customers[0][1];
        double res=customers[0][1];
        
        for(int i=1; i<customers.size() ; i++){
            if(customers[i][0]<=fin){
                res+=(fin-customers[i][0]+customers[i][1]);
                fin+= customers[i][1]; }
            else{
                fin=customers[i][0]+customers[i][1];
                res+=customers[i][1];  }
        }
        
        res/=(customers.size());
        
        return res;
    }
};
