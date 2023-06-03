class Solution
{
  public:
    string reverseEqn (string s)
    {
        string ans = "";
        for(int i = s.size()-1 ; i >= 0 ; i--){
            string temp ="";
            while(s[i] >='0' and s[i] <= '9'){
                temp += s[i--];
            }
            reverse(temp.begin(),temp.end());
            ans += temp;
            ans = ans + s[i];
        }
        return ans;
    }
};
