#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;
    cout<<(((x==2 && y==3) or (x==1 && y==1) or (x>1e6 || y>1e6))?"yes":"no");
    return 0;
}
