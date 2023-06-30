
class Solution{
public:	
		
int isDivisible(string s){
        int c=0;
        int x=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1') c+=x;
            x=(x==1)?2:1;
        }
        return (c%3==0)?1:0;
    }
};
