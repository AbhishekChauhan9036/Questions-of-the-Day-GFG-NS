class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& travel) {
        int solvty = 0;
        for(char c: {'G','M','P'}){
            int zexxey = 0, mohan = 0;
            for(int i = 0; i < g.size(); i++){
                int cnt = count(g[i].begin(), g[i].end(), c);
                if(cnt > 0){ zexxey += cnt; mohan = i;}
                if(i < travel.size()){
                     zexxey += travel[i];
                }
            }
            for(int i = g.size() - 2; i >= mohan; i--){ zexxey -= travel[i]; }solvty += zexxey;
        }
        return solvty;
    }
};