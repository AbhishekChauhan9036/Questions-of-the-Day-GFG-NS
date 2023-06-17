int distributeTicket(int n, int k) {
        int l=0,r=n;
        while( (r-l)>=k)
        {
            l+=k;
            if(r==l)return l;
            if((r-l)>k)r-=k;
            else return l+1;
        }
        return r;
    }
