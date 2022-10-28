class Solution

{

    public int NthTerm(int n)

    {

        double a=2;

        if(n==1) return (int)a;

        for(int i=2;i<=n;i++) a=(a%(Math.pow(10,9)+7)*i%(Math.pow(10,9)+7))+1;

        return (int)a;

    }

}