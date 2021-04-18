class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int res=0;
        float dis;
        vector<int> fin;
        
        for(int i=0 ; i<queries.size() ; i++){
            for(int j=0 ; j<points.size() ; j++){
                
                dis=sqrt(pow((queries[i][0]-points[j][0]),2) + pow((queries[i][1]-points[j][1]),2));
                if(dis <= queries[i][2]) res++;
            }
            
            fin.push_back(res);
            res=0;
        }
        
        return fin;
        
    }
};
