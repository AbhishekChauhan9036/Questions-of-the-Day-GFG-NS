static int safePos(int n, int k) {

        // code here

        

        ArrayList<Integer> al=new ArrayList<>();

        for(int i=1; i<=n; i++)

        {

            al.add(i);

        }

        int ans= findsafepos(al,k,0);

        

        return ans;

    }

    public static int findsafepos(ArrayList<Integer> al,int k,int ind)

    {

        if(al.size()==1)

        {

            return al.get(0);

        }

        

        int index=(ind+(k-1))%al.size();

        

        al.remove(index);

        

        return findsafepos(al,k,index);

 

    }