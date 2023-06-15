#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a[10000], n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = a[0];
        for (int i = 1; i < n; i++)
            ans = (((a[i] * ans)) / (gcd(a[i], ans)));

        cout << ans << endl;
    }

    return 0;
}
