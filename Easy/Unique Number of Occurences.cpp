class Solution {
 public:
     bool uniqueOccurrences(vector<int>& A) {
         unordered_map<int,int> map,map2;
		 //map contain the frequency of each A[i]
         for(int i=0;i<A.size();i++){
             map[A[i]]++;
         }  
		 //map2 map the value of frequencies in map
         for(auto i=map.begin();i!=map.end();i++){
             if(map2[i->second]>0)// if single frequency occur more than one time we simply return fasle
                 return false;
             map2[i->second]++;
         }
         return true;
     }
 };
