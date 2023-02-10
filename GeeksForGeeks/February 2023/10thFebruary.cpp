class Solution{
public:
       
     int maxInstance(string s){
        unordered_map<char, int> check;
        
        string S = "balloon";
        
        for(auto s1:S){
            check[s1] = 0;
        }
        
        for(auto s1:s){
            if(s1=='b'|| s1=='a'|| s1=='l'|| s1=='o'|| s1=='n'){
              check[s1]++;
            }
        }
        
        check['l'] = check['l']/2;
        check['o'] = check['o']/2;
        
        int ans = INT_MAX;
        
        for(auto x:check){
            ans = min(ans, x.second);
        }
        if(ans<=0){
            return 0;
        }
        return ans;
    }
};
