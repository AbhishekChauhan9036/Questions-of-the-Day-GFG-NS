   bool is(int n)
    {
        for(int i=0;i<16;i++)
        {
            if(pow(5,i)==n)
            {
                
                return true;
            }
        }
        return false;
        
    }
    int solve(int i,int n,int power,string &s)
    {
        
        if(i==0)
        {
           
           if(s[i]=='1'&&is(n+pow(2,power)))
           {
               return 1;
           }
           return 1e9;
            
        }
       
        int t=solve(i-1,n+(pow(2,power)*(s[i]-'0')),power+1,s);
        if(s[i]=='1')
        {
            if(is(n+pow(2,power))==true)
            {
             t=min(1+solve(i-1,0,0,s),t);
            }
        }
        
        return t;
    }
    int cuts(string s){
        
        int ans=solve(s.size()-1,0,0,s);
        if(s.size()==1&&s[0]=='1')
        {
            return 1;
        }
        if(ans>=1e9)
        {
            return -1;
        }
        return ans;
    }
