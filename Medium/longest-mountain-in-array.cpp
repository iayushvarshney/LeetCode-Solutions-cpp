class Solution {
public:
    int longestMountain(vector<int>& a) 
    {
        int i,n=a.size(),res,l,h,ind,maxi=0;
        if(n==0) return 0;
        for(i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                l=i-1; h=i+1;
                while(l>0 && a[l]>a[l-1]) l--;
                while(h<n-1 && a[h]>a[h+1]) h++;
                maxi=max(maxi,h-l+1);
            }
        }
        return maxi;
    }
};
