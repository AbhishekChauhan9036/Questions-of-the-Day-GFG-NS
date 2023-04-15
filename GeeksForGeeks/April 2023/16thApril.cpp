class Solution {
  public:
    long long solve(int n, vector<int> &A, vector<int> &B) {
        // code here
        long long sum =0;
        for(int i = 0;i<n;i++){
            sum += (A[i]-B[i]);
        }
        if(sum != 0) return -1;
        vector<int> Aev,Bev,Aod,Bod;
        for(int i = 0;i<n;i++){
            if(A[i]%2 == 0) Aev.push_back(A[i]);
            else Aod.push_back(A[i]);
            
            if(B[i]%2 == 0) Bev.push_back(B[i]);
            else Bod.push_back(B[i]);
        }
        if(Aev.size() != Bev.size()) return -1;
        sort(Aev.begin(),Aev.end());
        sort(Aod.begin(),Aod.end());
        sort(Bev.begin(),Bev.end());
        sort(Bod.begin(),Bod.end());
        long long diff = 0;
        for(int i = 0;i<Aev.size();i++){
            diff += abs(Aev[i]-Bev[i])/2;
        }
        for(int i = 0;i<Aod.size();i++){
            diff += abs(Aod[i]-Bod[i])/2;
        }
        return diff/2;
    }
};
