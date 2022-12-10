string buildLowestNumber(string num, int k)
{
    stack<char>st;
    
    int cnt=0;
    int n=num.size();
    for(int j=0 ; j<n ; j++){
        char ch=num[j];
        
        while(!st.empty() and st.top()-'0' > ch-'0' and cnt < k){
            st.pop();
            cnt++;
        }
        
        st.push(ch);
       
    }
    
    
    
    while(cnt < k and !st.empty()){
        st.pop();
        cnt++;
    }
    
    string ans="";
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        ans.push_back(ch);
    }
    
    while(ans.back() == '0'){
        ans.pop_back();
    }
    
    if(ans.empty()){
        return "0";
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}
