
/*--------------------------------------------------------------------------------------------------------------------------*/
/* Author = Chauhan Abhishek */
/* GitHub Id = https://github.com/AbhishekChauhan9036 */
/* Language = C++ */
/* Address = Ballia,UP,INDIA (221716)*/
/*--------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------*/
/* ............................. */
/*--------------------------------------------------------------------------------------------------------------------------*/

#ifndef LOCAL
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#endif

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define int ll
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define cline "\n"
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define bg begin()
#define ed end()
#define sarowar(x) x.bg,x.ed
#define si(x) int(x.size())
#define cyes cout<<"YES"<<cline;
#define cno cout<<"NO"<<cline;
#ifdef LOCAL
#define dmp(x) cerr<<__LINE__<<" "<<#x<<" "<<x<<endl
#else
#define dmp(x) void(0)
#endif

template<class t,class u> bool chmax(t&a,u b){if(a<b){a=b;return true;}else return false;}
template<class t,class u> bool chmin(t&a,u b){if(b<a){a=b;return true;}else return false;}

template<class t> using vc=vector<t>;
template<class t> using vvc=vc<vc<t>>;

using pi=pair<int,int>;
using vi=vc<int>;

template<class t,class u>
ostream& operator<<(ostream& os,const pair<t,u>& p){
    return os<<"{"<<p.a<<","<<p.b<<"}";
}

template<class t> ostream& operator<<(ostream& os,const vc<t>& v){
    os<<"{";
    for(auto e:v)os<<e<<",";
    return os<<"}";
}

#define mp make_pair
#define mt make_tuple
#define one(x) memset(x,-1,sizeof(x))
#define zero(x) memset(x,0,sizeof(x))
#ifdef LOCAL
void dmpr(ostream&os){os<<endl;}
template<class T,class... Args>
void dmpr(ostream&os,const T&t,const Args&... args){
    os<<t<<" ";
    dmpr(os,args...);
}
#define dmp2(...) dmpr(cerr,__LINE__,##__VA_ARGS__)
#else
#define dmp2(...) void(0)
#endif

using uint=unsigned;
using ull=unsigned long long;

template<class t,size_t n>
ostream& operator<<(ostream&os,const array<t,n>&a){
    return os<<vc<t>(all(a));
}

template<int i,class T>
void print_tuple(ostream&,const T&){
}

template<int i,class T,class H,class ...Args>
void print_tuple(ostream&os,const T&t){
    if(i)os<<",";
    os<<get<i>(t);
    print_tuple<i+1,T,Args...>(os,t);
}

template<class ...Args>
ostream& operator<<(ostream&os,const tuple<Args...>&t){
    os<<"{";
    print_tuple<0,tuple<Args...>,Args...>(os,t);
    return os<<"}";
}

template<class t>
void print(t x,int suc=1){
    cout<<x;
    if(suc==1)
        cout<<"\n";
    if(suc==2)
        cout<<" ";
}

ll read(){
    ll i;
    cin>>i;
    return i;
}

vi readvi(int n,int off=0){
    vi v(n);
    rep(i,n)v[i]=read()+off;
    return v;
}

pi readpi(int off=0){
    int a,b;cin>>a>>b;
    return pi(a+off,b+off);
}

template<class t,class u>
void print(const pair<t,u>&p,int suc=1){
    print(p.a,2);
    print(p.b,suc);
}

template<class T>
void print(const vector<T>&v,int suc=1){
    rep(i,v.size())
        print(v[i],i==int(v.size())-1?suc:2);
}

template<class T>
void print_offset(const vector<T>&v,ll off,int suc=1){
    rep(i,v.size())
        print(v[i]+off,i==int(v.size())-1?suc:2);
}

template<class T,size_t N>
void print(const array<T,N>&v,int suc=1){
    rep(i,N)
        print(v[i],i==int(N)-1?suc:2);
}

string readString(){
    string s;
    cin>>s;
    return s;
}

template<class T>
T sq(const T& t){
    return t*t;
}

//#define CAPITAL
void yes(bool ex=true){
    #ifdef CAPITAL
    cout<<"YES"<<"\n";
    #else
    cout<<"Yes"<<"\n";
    #endif
    if(ex)exit(0);
    #ifdef LOCAL
    cout.flush();
    #endif
}
void no(bool ex=true){
    #ifdef CAPITAL
    cout<<"NO"<<"\n";
    #else
    cout<<"No"<<"\n";
    #endif
    if(ex)exit(0);
    #ifdef LOCAL
    cout.flush();
    #endif
}
void possible(bool ex=true){
    #ifdef CAPITAL
    cout<<"POSSIBLE"<<"\n";
    #else
    cout<<"Possible"<<"\n";
    #endif
    if(ex)exit(0);
    #ifdef LOCAL
    cout.flush();
    #endif
}
void impossible(bool ex=true){
    #ifdef CAPITAL
    cout<<"IMPOSSIBLE"<<"\n";
    #else
    cout<<"Impossible"<<"\n";
    #endif
    if(ex)exit(0);
    #ifdef LOCAL
    cout.flush();
    #endif
}

constexpr ll ten(int n){
    return n==0?1:ten(n-1)*10;
}

const ll infLL=LLONG_MAX/3;

#ifdef int
const int inf=infLL;
#else
const int inf=INT_MAX/2-100;
#endif

int topbit(signed t){
    return t==0?-1:31-__builtin_clz(t);
}
int topbit(ll t){
    return t==0?-1:63-__builtin_clzll(t);
}
int botbit(signed a){
    return a==0?32:__builtin_ctz(a);
}
int botbit(ll a){
    return a==0?64:__builtin_ctzll(a);
}
int botbit(ull a){
    return a==0?64:__builtin_ctzll(a);
}
int popcount(signed t){
    return __builtin_popcount(t);
}
int popcount(ll t){
    return __builtin_popcountll(t);
}
int popcount(ull t){
    return __builtin_popcountll(t);
}
bool ispow2(int i){
    return i&&(i&-i)==i;
}
ll mask(int i){
    return (ll(1)<<i)-1;
}

bool inc(int a,int b,int c){
    return a<=b&&b<=c;
}

template<class t> void mkuni(vc<t>&v){
    sort(all(v));
    v.erase(unique(all(v)),v.ed);
}

ll rand_int(ll l, ll r) { 
    #ifdef LOCAL
    static mt19937_64 gen;
    #else
    static mt19937_64 gen(chrono::steady_clock::now().time_since_epoch().count());
    #endif
    return uniform_int_distribution<ll>(l, r)(gen);
}

template<class t>
void myshuffle(vc<t>&a){
    rep(i,si(a))swap(a[i],a[rand_int(0,i)]);
}

template<class t>
int lwb(const vc<t>&v,const t&a){
    return lower_bound(all(v),a)-v.bg;
}

vvc<int> readGraph(int n,int m){
    vvc<int> g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}

vvc<int> readTree(int n){
    return readGraph(n,n-1);
}

vc<ll> presum(const vi&a){
    vc<ll> s(si(a)+1);
    rep(i,si(a))s[i+1]=s[i]+a[i];
    return s;
}

const int nmax=50;
const int C=26;

int cur[nmax],lyn[nmax+1];

bool nxlyndon(int i){
    if(i==0){
        lyn[i+1]=1;
        return true;
    }else{
        int x=lyn[i];
        if(cur[i-x]==cur[i]){
            lyn[i+1]=x;
            return true;
        }else if(cur[i-x]>cur[i]){
            return false;
        }else{
            lyn[i+1]=i+1;
            return true;
        }
    }
}

int ini[nmax],inilen;
int n,k;
int dp[nmax+1];

int mult(int a,int b){
    if(a==0||b==0)return 0;
    return a*min(inf/a+1,b);
}

void add(int&a,int b){
    a+=b;
    chmin(a,inf);
}

void dfs(int i,bool nowini){
    if(i>=inilen)nowini=false;
    if(!nowini&&lyn[i]==i&&i>=(n+1)/2){
        rng(j,i,n+1)dp[j]=0;
        int tot=1;
        dp[i]=1;
        rng(j,i,n+1)if(tot<=k){
            rng(q,j+1,n+1)if(tot<=k){
                int val=mult(dp[j],C-1-cur[q-j-1]);
                add(dp[q],val);
                add(tot,val);
            }
        }
        if(k>=tot){
            k-=tot;
            return;
        }
    }
    if(!nowini&&lyn[i]==i){
        if(k==0){
            rep(j,i)cout<<char('a'+cur[j]);
            cout<<endl;
            
            dmp(vi(lyn,lyn+i+1));
            
            exit(0);
        }
        k--;
    }
    if(i<n){
        int lw=0;
        if(nowini){
            cur[i]=ini[i];
            if(nxlyndon(i)){
                dfs(i+1,true);
            }
            lw=ini[i]+1;
        }
        rng(v,lw,C){
            cur[i]=v;
            if(nxlyndon(i)){
                dfs(i+1,false);
            }
        }
    }
}


int Bhagwat_Geeta(){ 
    int a,b,ans=INT_MAX;;
        cin>>a>>b;
       string s;
       cin>>s;
       int arr[a];
       int count=0;
       for(int i=1;i<a;i++){
        if(s[i-1]!=s[i]){
           count++;
           arr[i]=count;
        }
        else arr[i]=count;
       }
       arr[0]=0;
       for(int i=a-1;i>=0;i--){
        if((i-(b-1))<0)break;
        int check=arr[i]-arr[i-(b-1)];
        if(s[i]=='0')check++;
        ans=min(ans,check);
       }
      return ans;

}


string longestCommonPrefix(string ar[], int n){
    if (n == 0)
        return "";
 
    if (n == 1)
        return ar[0];
 
    sort(ar, ar + n);
    int en = min(ar[0].size(),ar[n - 1].size());
    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < en && first[i] == last[i])
        i++;
 
    string pre = first.substr(0, i);
    return pre;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout<<fixed<<setprecision(20);
    int t;
    cin>>t;

    while(t--){
       cout<<Bhagwat_Geeta()<<cline;
    }
}
/*--------------------------------------------------------------------------------------------------------------------------*/
