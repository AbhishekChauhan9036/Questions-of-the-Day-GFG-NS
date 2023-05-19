
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        
        unordered_map<int, int> mp;
        for (int i: hand) {
            mp[i]++;
        }
        
        sort(hand.begin(), hand.end());
        
        for (auto card: hand) {
            if (mp[card] == 0) continue;
            
            for (int j= 0; j < groupSize; j++) {
                int curCard = card + j;
                
                if (mp[curCard] == 0) return false;
                
                mp[curCard]--;
            }
        }
        
        return true;
    }
};
