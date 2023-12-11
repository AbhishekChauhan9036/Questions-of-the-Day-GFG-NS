
//your code here 
#define ll long long
 const int N = 1e5+5;
const int M = 1e9+7;
ll binpow(ll a,ll b,ll p){
    if(b==0)return 1;
    ll t=binpow(a,b/2,p);
    if(b%2)return (((a*t)%p)*t)%p;
    else return ((t*t)%p);
}
 
ll fact[N],invfact[N];
void init(){
    fact[0]=1;
    for(ll i=1;i<N;i++){fact[i]=i*fact[i-1]%M;}
    invfact[N-1]=binpow(fact[N-1],M-2,M);
    for(ll i=N-2;i>=0;i--){
        invfact[i]=(i+1)*invfact[i+1]%M;
    }
}
ll ncr(ll n,ll r,ll p){
    return (((fact[n]*invfact[n-r])%p)*invfact[r])%p;
}
bool f = 0;
class Solution {
  public:
    int bestNumbers(int n, int a, int b, int c, int d) {
        // code here
        if(f==0)
        {
            f = 1;
            init();
        }
        ll ans = 0;
        if(a==b){
            ll sum=n*a;
            while(sum>0){
                if(sum%10==c || sum%10==d){
                    return 1;
                }
                sum/=10;
            }
            return 0;
        }else{
            for(int i=0; i<=n; i++)
            {
                int sum = i*a+(n-i)*b;
                bool good = false;
                while(sum>0)
                {
                    if(sum%10==c || sum%10==d)
                    {
                        good = true;
                        break;
                    }
                    sum /= 10;
                }
                if(good)
                {
                    ans += ncr(n,i,M);
                    ans %= M;
                }
            }
            return ans;
        }
    }
};
