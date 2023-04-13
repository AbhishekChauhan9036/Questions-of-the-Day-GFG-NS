class Solution {
  public:
  
  bool check(pair<int,int>p,int c ,int r){
      if(p.first == c && p.second == r){
          return true;
      }
      else{
      
          return false;
      }
  }
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>>st;
        st.push({color[0],radius[0]});
        for(int i =1 ; i < color.size() ;i++ ){
            if(st.empty()){
                st.push({color[i],radius[i]});
            }
            else{
            if(check(st.top(),color[i],radius[i])){
                st.pop();
            }
            else{
                st.push({color[i],radius[i]});
            }
        }
    
            
        }
        return st.size();
    }
    
};
