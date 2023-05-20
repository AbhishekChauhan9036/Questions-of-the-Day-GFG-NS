class Solution {
  public:
   int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        
        sort(chairs.begin() , chairs.end());
        sort(passengers.begin() , passengers.end());
        int count = 0;
        for(int i = 0 ; i< n;  i++){
            if(chairs[i] < passengers[i]){
                while(chairs[i]!=passengers[i]){
                    passengers[i]--;
                    count++;
                    
                }
            }
            else{
                while(chairs[i]!=passengers[i]){
                    passengers[i]++;
                    count++;
                }
            }
        }
        return count;
    }
};
