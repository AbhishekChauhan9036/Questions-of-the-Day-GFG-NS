
class Solution {
    static String BalancedString(int N) {
        // code here
        StringBuilder sb = new StringBuilder();
        int val = sum(N);   
        while(N>0) {
            if(N>=26) {
                sb.append(find(26,0));
                N-=26;
            } else {
                if(N%2==0) {
                    sb.append(find(N/2,0));
                    sb.append(find(N/2,1));
                } else {
                    if(val%2==0) {
                        sb.append(find((N+1)/2,0));
                        sb.append(find((N-1)/2,1));
                    } else {
                        sb.append(find((N-1)/2,0));
                        sb.append(find((N+1)/2,1));
                    }
                }
                N=0;
            }
        }
        return sb.toString();
    }
 
    public static int sum(int n) {
        int s=0;
        while(n>0) {
            s+=(n%10);
            n/=10;
        }
        return s;
    }

    public static String find(int v,int status) {
        StringBuilder sb = new StringBuilder();
        if(status==0) {
            for(char i='a';v>0;v--,i++) {
                sb.append(Character.toString(i));
            }
        } else {
            for(char i='z';v>0;v--,i--) {
                sb.append(Character.toString(i));
            }
            sb.reverse();
        }
        return sb.toString();
    }
}
