#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==1) 
    cout<<1;
    else if(n==0)
    cout<<0;
    else(n%2)?(cout<<(n/2+1)):(cout<<n+1);
    return 0;
}
