class Solution {

    static long maxSumLCM(int a) {
        long sum=0;
        for (int i = 1; i*i <=a ;i++) {

            if(a%i==0){

                if(i==a/i){

                    sum+=i;      

                }else{

                sum+=i+a/i;
}
            }
        }
        return sum;
    }
}
