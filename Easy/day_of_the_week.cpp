string dayOfTheWeek(int k, int m, int year) {
        map<int,string>mp;
        mp[0]="Sunday";
        mp[1]="Monday";
        mp[2]="Tuesday";
        mp[3]="Wednesday";
        mp[4]="Thursday";
        mp[5]="Friday";
        mp[6]="Saturday";
        if(m>2)m=m-2;
        else{ m+=10,year-=1;}
        string s=to_string(year);
        string c="";
        c.push_back(s[0]);
        c.push_back(s[1]);
        string d="";
        d.push_back(s[2]);
        d.push_back(s[3]);
        int D=stoi(d);
        int C=stoi(c);
        
        int f=k+(13*m-1)/5+D+ D/4 +C/4-2*C;//cout<<f;
        
        if(f<0){
                 int r=f%7;//cout<<r;
                 if(r==0)return mp[r];
                 r+=7;
                return mp[r];
        }
        return mp[f%7];
        
        
        
}
