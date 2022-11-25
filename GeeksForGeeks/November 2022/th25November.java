class Solution{  

    long count(long n)

    {

        // Code Here

        long result = 0;

        int setBits = 0;

        for(int i = 0; i < 64; i++){

            if((n & 1) == 1){

                setBits++;

                long csb_res = csb(i, setBits);

                result = result + csb_res;

            }

            n = n >> 1;

        }

        return result;

    }

    

    public static long csb(long n, long k){

            

        if(n == 0 || n < k)

            return 0;

        long result = 1;

        if(k > n-k){

            k = n - k;

        }

        

        for(int i = 0; i < k; i++){

            result *= (n-i);

            result /= (i + 1);

        }

            

        return result;

    }

}
