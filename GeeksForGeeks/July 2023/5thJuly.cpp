class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int profit = 0;
        int mine = prices[0];
        int maxe = prices[0];
        
        for(int i = 1; i < n; i++) {
            if(prices[i] < maxe) {
                profit += (maxe - mine);
                mine = prices[i];
                maxe = prices[i];
            } else {
                maxe = max(maxe, prices[i]);
            }
        }
        
        profit += (maxe - mine);
        
        return profit;
    }
};
