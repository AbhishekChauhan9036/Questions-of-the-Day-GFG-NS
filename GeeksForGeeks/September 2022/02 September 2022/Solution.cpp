class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        int H=0,V=0;
        sort(X.begin(),X.end());
        sort(Y.begin(),Y.end());
        int totalCost=0;
        int v=M-2,h=N-2;
        while(v>=0&&h>=0){
            if(X[v]>=Y[h]){
                totalCost+=(X[v]*(H+1));
                V++;
                v--;
            }
            else{
                totalCost+=(Y[h]*(V+1));
                H++;
                h--;
            }
            // cout<<totalCost<<"\n";
        }
        while(v>=0){
            totalCost+=X[v]*(H+1);
                V++;
                v--;
        }
        while(h>=0){
            totalCost+=Y[h]*(V+1);
                H++;
                h--;
        }
        return totalCost;
    }
};