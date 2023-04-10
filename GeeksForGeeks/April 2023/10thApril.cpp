class Solution {
  public:
   int maxIntersections(vector<vector<int>> lines, int N) {
        // Code here
        vector<pair<int,int>> v;
        for(int i=0;i<N;i++){
            v.push_back({lines[i][0], 1});
            v.push_back({lines[i][1]+1, -1});
        }
        sort(v.begin(), v.end());
        
        int intersect=0, maxintersect=0;
        for(int i=0;i<v.size();i++){
            intersect+=v[i].second;
            maxintersect=max(maxintersect,intersect);
        }
        return maxintersect;
    }
};

