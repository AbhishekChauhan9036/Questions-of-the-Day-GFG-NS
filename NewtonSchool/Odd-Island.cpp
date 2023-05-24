#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

signed main() {
    long long n, k;
    cin >> n >> k;
    cout<< (((k * k) <= n && (n + k) % 2 == 0) ? "YES" : "NO");
    return 0;
}
