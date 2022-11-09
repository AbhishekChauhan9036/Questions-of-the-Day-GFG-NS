// 08 Oct 
class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        int cnt=0;
        unordered_map<char,int> m;
        for(int i=0;i<S.length();i++){
            if(i>=K){
                if(m.size()==K-1)cnt++;
                if(m[S[i-K]]==1) m.erase(S[i-K]);
                else m[S[i-K]]--;  }
            m[S[i]]++; }
        if(m.size()==K-1) cnt++;
        return cnt;   }  };