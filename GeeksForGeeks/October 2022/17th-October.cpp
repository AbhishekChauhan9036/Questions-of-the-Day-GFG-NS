  vector<int> findLeastGreater(vector<int>& arr, int n) {

      set<int>s;

      s.insert(arr[n-1]);

      arr[n-1]=-1;

      for(int i=n-2;i>=0;i--){

        auto it=s.upper_bound(arr[i]);

        

        if(it==s.end())

         {

           s.insert(arr[i]);

           arr[i]=-1;

         }

        else{

            s.insert(arr[i]);

            arr[i]=*it;

        }

      }

      s.clear();

     return arr;

    }