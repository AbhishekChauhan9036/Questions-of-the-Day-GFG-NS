
class Solution {
public:
      bool isPrime(int x){   

            if(x==1)return false;

            if(x==2||x==3)return true;

            if(x%2==0||x%3==0)return false;

            for(int i=5;i*i<=x;i+=6){

                if(x%i==0 || x%(i+2)==0) return false;

            }

           return true;

        }

    string isSumOfTwo(int N){

        if(N%2==0 && N!=2) return "Yes";

        if(isPrime(N-2))

        return "Yes";

        else  

        return "No";

    }
};
