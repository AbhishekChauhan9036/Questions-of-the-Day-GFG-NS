class Solution
{
    public:
    string reverseWord(string str)
    {
        string st="";
        stack<char>s;
        for(int i=0;i<str.size();i++){
            s.push(str[i]);
        }
        while(!s.empty()){
            st+=s.top();
            s.pop();
        }
        return st;
    }
};
