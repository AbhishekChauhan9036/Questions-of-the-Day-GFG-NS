int safePos(int n, int k) {

        // code here..

            list<int> l;

            for(int i=1;i<=n;i++) {

              l.push_back(i);

            }

            auto it = l.begin();

            while(l.size()>1) {

               for(int i=1;i<k;i++) {

                   it++;

                   if(it==l.end()) {

                     it = l.begin();

                   }

            }

               it = l.erase(it);

               if(it==l.end()) {

               it=l.begin();

            }

        }

         return *l.begin();

    }
