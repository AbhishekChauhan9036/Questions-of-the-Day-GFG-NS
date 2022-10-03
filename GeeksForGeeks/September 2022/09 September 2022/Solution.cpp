class Solution{
    public:
    string digitsNum(int N)
    {
        string s(N, '0');
        string str = "";
        if(N%9 != 0)
            str += (N%9 + '0');
        while(N/9>0){
            str += (9 + '0');
            N -= 9;
        }
        return str+s;
    }
};