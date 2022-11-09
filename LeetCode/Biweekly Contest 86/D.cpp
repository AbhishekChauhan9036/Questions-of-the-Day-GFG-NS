class Solution {
public:
    class anishh {
        int __tyt;vector<vector<int>> st;int log; public:
        anishh(int _n){
            __tyt = _n;
            log = (int)log2(__tyt);
            st.resize(__tyt,vector<int>(log+1));
        }
        void createTable(vector<int>&arr){
            for(int i=0;i<__tyt;i++){
                st[i][0] = arr[i];
            }
            for(int k=1;k<=log;k++){
                for(int i=0;i<__tyt;i++){
                    if(i+(1<<(k-1)) < __tyt){
                        st[i][k] = max(st[i][k-1],st[i+(1<<(k-1))][k-1]);
                    }
                    else st[i][k] = st[i][k-1];
                }
                
            }
        }
        int Query(int L,int R){
            int k = (int)log2(R-L+1);
            return max(st[L][k],st[R-(1<<k)+1][k]);
        }
    };

    vector<long long> pref;

    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int __tyt=chargeTimes.size();
        anishh st(__tyt);
        st.createTable(chargeTimes);
        pref.resize(__tyt+1);
        for(int i=1;i<=__tyt;i++)pref[i] = pref[i-1]+runningCosts[i-1];
        int l=0,r=__tyt;
        while(l<r){
            int mid = (l+r)/2;
            int i=0,j=mid;
            bool ok = false;
            while(j<__tyt){
                long long sum = (st.Query(i,j) + (mid+1) * (pref[j+1]-pref[i]));
                ok |= (sum <= budget);
                i++;j++;
            }
            if(ok) l = mid+1;
            else r = mid;
        }
        return l;
    }
};