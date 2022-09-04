
class Solution{
public:
    vector<string> pattern(int n){
        int cur = 1;
        vector<string> ret(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i * 2; j++){
                ret[i] += "-";
            }
            for(int j = 0; j < n - i; j++){
               ret[i] += to_string(cur++) + "*";
            }
            int add = 0;
            for(int j = i + 1; j < n; j++){
                add += 2 * (n - j);
            }
            int c2 = cur + add;
            for(int j = 0; j < n - i; j++){
                ret[i] += to_string(c2++) + "*";
            }
            ret[i].pop_back();
        }
        return ret;
    }
};