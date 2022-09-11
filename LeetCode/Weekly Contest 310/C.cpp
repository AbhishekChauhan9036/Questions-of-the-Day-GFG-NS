class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int anhgf = 0;
        priority_queue<int, vector<int>, greater<int>> has11;
        for(auto i : intervals){
            if(has11.size() == 0 || has11.top() > i[0]){anhgf++;}
            else{has11.pop();}
            has11.push(i[1]+1);
        }
        return anhgf;
    }
};