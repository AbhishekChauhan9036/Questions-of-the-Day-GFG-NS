#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long

signed main() {
    ll n;
    cin >> n;
    ll totalSum = 0;
    ll currentPower = 1;
    for (int i = 1; i <= n; i++) {
        if (i == currentPower) {
            totalSum -= i;
            currentPower <<= 1; 
        } else {
            totalSum += i;
        }
    }
    cout << totalSum << endl;
    return 0;
}
