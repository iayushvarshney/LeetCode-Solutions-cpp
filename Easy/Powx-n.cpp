double myPow(double x, int n) 
    {
        double temp = 1.0;
        long long m = n;
        
        if(m < 0)
            m = -1 * m;
        
        while(m)
        {
            if(m % 2)
            {
                temp = temp * x;
                m = m - 1;
            }
            else
            {
                x = x * x;
                m = m / 2;
            }
        }
        
        if(n < 0)
            temp = (double)(1.0) / (double)(temp);
        
        return temp;
    }
