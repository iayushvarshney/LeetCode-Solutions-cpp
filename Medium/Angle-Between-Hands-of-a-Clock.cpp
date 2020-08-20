// GitHub.com/iayushvarshney

class Solution {
public:
    double angleClock(double hour, double minutes) {
        
        double deg_min, deg_hr, res;
        
        deg_min=minutes*6;
	
	    deg_hr=(hour+(minutes/60))*30;
        
        if(deg_hr>=360)
            deg_hr-=360;
	
	    res=abs(deg_min-deg_hr);
        
        if(res>180)
            res=360-res;
	
        return res;
        
    }
};
