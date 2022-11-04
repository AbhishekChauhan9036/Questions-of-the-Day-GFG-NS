
class Solution {
  public:
    string baseEquiv(int n, int m){

       int x,cnt;

       for(int i=2;i<=32;i++){

           x=n;cnt=1;

           while(x>=i){

               cnt++;

               x=(x/i);

           }

          if(cnt==m) return "Yes";

       }

      return "No";

    }
};