//solution in c++
class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
    int sum=0;
     int mini=a[0];
     for(int i=0;i<a.size();i++){
         mini=min(mini,a[i]);
         sum+=a[i];
         mini=min(mini,sum);
         a[i]=sum;
     }
     int maxi=a[0];
     for(int i=1;i<a.size();i++){
         maxi=max(maxi,a[i-1]);
         
         mini=min(a[i]-maxi,mini);
     }
     return mini;
  }
};