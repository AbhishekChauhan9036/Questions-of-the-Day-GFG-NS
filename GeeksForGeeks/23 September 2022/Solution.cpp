class Solution{
public:
    int minLength(string s, int n) {
       stack<int>st;
       for(int i=0;i<s.length();i++)
       {
           st.push(s[i]-'0');
           while(st.size()>=2)
           {
               int a = st.top();
               st.pop();
               int b=st.top();
               st.pop();
               if((a==0 && b==9)  (a==9 && b==0)) continue;
               else if((a%2!=0 && a==b-1)  (a%2==0 && b==a-1)) continue;
               else 
               {
                   st.push(b);
                   st.push(a);
                   break;
               }
           }
       }
       return st.size();
    } 
};