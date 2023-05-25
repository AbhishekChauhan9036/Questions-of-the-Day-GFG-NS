class Solution {
  public:
    vector<string>ans;
    vector<char>oper = {'*','+','-'};
    #define ll long long
    bool check(string exp,int &target){
        vector<ll>nums;
        vector<char>ops;
        int M = exp.size(),j = 0;
        while(j < M){
            ll val = 0LL; int c = 0;
            while(j < M && exp[j] >= '0' && exp[j] <= '9'){
                val = val * 10LL + (exp[j] - '0');
                c++;
                j++;
            }
            if(val == 0){
                if(c > 1){
                    return false;
                }
                else{
                    nums.push_back(val);
                }
            }
            else{
                int l = (int)log10(val) + 1;
                if(l != c){
                    return false;
                }
                else{
                    nums.push_back(val);
                }
            }
            c = 0; char op;
            while(j < M && (exp[j] == '+' || exp[j] == '*' || exp[j] == '-')){
                op = exp[j];
                c++;
                j++;
            }
            if(c > 1){
                return false;
            }
            else{
                if(c == 1){
                    ops.push_back(op);
                }
            }
        }
        ll eval = nums[0];
        vector<ll>new_nums;
        vector<char>new_ops;
        for(int j = 0; j < ops.size(); j++){
            if(ops[j] == '*'){
                eval *= nums[j+1];
            }
            else{
                new_nums.push_back(eval);
                eval = nums[j+1];
                new_ops.push_back(ops[j]);
            }
        }
        new_nums.push_back(eval);
        eval = new_nums[0];
        for(int j = 0; j < new_ops.size(); j++){
            if(new_ops[j] == '+'){
                eval += new_nums[j+1];
            }
            else{
                eval -= new_nums[j+1];
            }
        }
        return eval == target;
    }
    void ways(int i,int &N,string &S,int &target,string &exp){
        if(i == N-1){
            exp.push_back(S[i]);
            if(check(exp,target)){
                ans.push_back(exp);
            }
            exp.pop_back();
        }
        else{
            exp.push_back(S[i]);
            ways(i+1,N,S,target,exp);
            for(int j = 0; j < 3; j++){
                exp.push_back(oper[j]);
                ways(i+1,N,S,target,exp);
                exp.pop_back();
            }
            exp.pop_back();
        }
    }
    vector<string> addOperators(string S, int target) {
        // code here
        int N = S.size();
        string exp;
        ways(0,N,S,target,exp);
        return ans;
    }
};
