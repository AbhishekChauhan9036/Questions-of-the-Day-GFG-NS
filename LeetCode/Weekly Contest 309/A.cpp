class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<int, int> m;
        
        for(int i = 0;i < s.length(); i++){
            if(m[s[i]] == 0){
                m[s[i]] = i+1;
            }else{
                if(distance[s[i] - 'a'] != (i-m[s[i]])){
                    return false;
                }
            }
        }
        return true;
    }
};
