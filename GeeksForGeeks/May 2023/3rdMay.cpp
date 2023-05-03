class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        map<string, int> mp;
        for(auto el:arr){
            mp[el] ++;
        }
        for(auto el:arr){
            int x = mp[el];
            string s = el;
            reverse(s.begin(),s.end());
            if(el == s) continue;
            int y = mp[s];
            if(x != y)  return false;
        }
        return true;
    }
};
