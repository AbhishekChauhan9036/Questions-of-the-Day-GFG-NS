class Solution{

public:

 vector<int> findSubarray(int a[], int n) {

     // code here

     map<int,pair<int,int>>mp;

     int maxx=0;

     int st=-1;

     if(a[0]>maxx){

     maxx=a[0];

     st=0;

     }

     for(int i=1;i<n;i++){

         if(maxx+a[i] >= maxx){

         maxx+=a[i];

         if(st==-1)

         st=i;

         }

         else{

             mp[maxx]={st,i-1};

             maxx=0;

             st=-1;

         }

     }

     if(maxx>0)

     mp[maxx]={st,n-1};

     int minn=0,start=-1,end=-1;

     for(auto i:mp){

         if(i.first > minn){

             start=i.second.first;

             end=i.second.second;

         }

     }

  vector<int>ans;

  if(start==-1 and end==-1)

  return {-1};

  for(int i=start;i<=end;i++){

      ans.push_back(a[i]);

  }

     return ans;

 }

};
