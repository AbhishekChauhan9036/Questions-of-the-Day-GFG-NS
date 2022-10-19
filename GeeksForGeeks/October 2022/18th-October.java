//........................................................................................
class Solution{
    static ArrayList<Integer> downwardDigonal(int N, int A[][])
    {
        ArrayList<Integer> a=new ArrayList<>();
        int j=0;
        int i=0;
        while((i<N)&&(j<N)){
            if((i==0)&&(j!=N-1)){
                int k=j;
                int l=i;
                while(l<=j){
                    a.add(A[l++][k--]);
                }
                j++;
            }
            else if(j==N-1){
                int k=j;
                int l=i;
                while(i<=k){
                    a.add(A[l++][k--]);
                }
                i++;
            }
        }
        return a;
        // code here 
    }
}
