class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        
        int temp, res=0;
        
        for(auto i : ops){
            if(i== "D"){
                temp=s.top();
                temp=(temp*2);
                s.push(temp);
            }
            else if(i == "C"){
                s.pop();
            }
            else if(i=="+"){
                stack<int> t(s);
                int sum=0;
                
                sum=t.top();
                t.pop();
                sum+=t.top();
                
                s.push(sum);
            }
            else{
                int x;
                
                stringstream geek(i);
                geek>>x;
                
                s.push(x);
            }
        }
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        
        return res;
    }
};
