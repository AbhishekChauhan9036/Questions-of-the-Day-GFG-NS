void dfs(int tmp,int num,int n,int m,vector<int>&res)

    {

      tmp=tmp*10+num;

 

        if(tmp>m)

 

           return;

        if(tmp>=n and tmp<=m) res.push_back(tmp);

 

         if(num!=0)

 

         {

 

             dfs(tmp,num-1,n,m,res);

 

         }

 

         if(num!=9)

 

         {

 

              dfs(tmp,num+1,n,m,res);

 

         }

 

    }

 

    int steppingNumbers(int n, int m)

    {

vector<int> res;

 

        if(n==0)

 

          res.push_back(n);

 

       for(int i=1;i<=9;i++)

 

       {

           dfs(0,i,n,m,res);

       }

       return res.size();

  }

};