class Solution {

  public:

    int noConseBits(int n) {

        int count=0;

        int p1=0;

   for(int i=0;i<32;){

       count=0;

      if(n&(1<<i)){

          p1=i;

          while(n&(1<<i)){

              i++;

              count++;

          }

          if(count>=3){

              for(int j=p1+count%3;j<i;j+=3){

                  n=n^(1<<j);

              }

          }

      }

      else{

          i++;

      }

 

   }

   return n; }

};
