class Solution

{

    int[] prime;

    Solution()

    {

        // Every index of prime stores zero or one

        // If prime[i] is zero means i is not a prime

        // If prime[i] is one means i is a prime

         prime = new int[10000];

        Arrays.fill(prime, 1);

        prime[0]=prime[1]=0;

        for(int i=2;i*i<=10000;i++){

            if(prime[i]==0) continue;

            for(int j=2;i*j<10000;j++) prime[i*j]=0;

        }

        for(int i=0 ; i<1000;i++) prime[i]=0;

    }

    

    public int shortestPath(int Num1,int Num2){

        // Complete this function using prime array

        

        Queue<int[]> q = new LinkedList<>();

        int[] v = new int[10000];

        q.add(new int[]{Num1,0});

        v[Num1]=1;

        while(!q.isEmpty()){

            int[] p =q.poll();

            if(p[0]==Num2) return p[1];

            for(int i=1;i<=1000;i*=10){

                for(int j=0;j<=9;j++){

                    int z= p[0]/(i*10)*(i*10)+(j*i)+p[0]%i;

                    if(prime[z]==1 && v[z]==0){

                        v[z]=1;

                        q.add(new int[]{z,p[1]+1});

                    }

                }

            }

        }

        return -1;

    }

}
