class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> res;
        
        
        for(int i=0 ; i<boxes.size() ; i++){
            int temp_sum=0;
            
            for(int j=0 ; j<boxes.size() ; j++){
                if(boxes[j]=='1'){
                    temp_sum+= abs(j-i);
                }
            }
            
            res.push_back(temp_sum);
        }
        
        return res;
        
    }
};
