///CPP
class Solution {
  public:
     string removePair(string s) {
      stack<char>st;
      for(int i=0;i<s.size();i++){
          if(st.size()>0 &&st.top()==s[i]){
              st.pop();
          }else st.push(s[i]);
      }
      s="";
    while(!st.empty()){
        s=s+st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s.size()>0? s:"-1";
    }
};
