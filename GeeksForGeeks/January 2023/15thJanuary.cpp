class Solution{
public:
void update(vector<int>&bit,int ind)
{
    while(ind<bit.size())
    {
        bit[ind]+=1;
        ind+=(ind&(-ind));
    }
}
int get(vector<int>&bit,int ind)
{
    int sum=0;
    while(ind>0)
    {
        sum+=bit[ind];
        ind-=(ind&(-ind));
    }
    return sum;
}
// 1e5+1 1e5 1e5+1 1e5+2
  long long countSubstring(string a){
    vector<int>bit(2e5+2);
    vector<int>z;
    z.push_back(1e5+1);
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='0')
        z.push_back(z[i]-1);
        else
        z.push_back(z[i]+1);
    }
    long long ans=0;
    for(int i=a.length();i>=0;i--)
    {
        update(bit,z[i]);
        ans+=(a.length()-get(bit,z[i])-i+1);
    }
    return ans;
  }
};
