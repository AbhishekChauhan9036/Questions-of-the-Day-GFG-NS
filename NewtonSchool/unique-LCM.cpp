#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ll X;
    cin >> X;

    ll k = X;
    vector<ll> divisors;

    for (ll i = 1; i * i <= X; ++i) {
        if (X % i == 0) {
            divisors.push_back(i);
            if (i * i != X) {
                divisors.push_back(X / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    int distinctCount = 0;
    ll prevValue = -1;

    for (ll d : divisors) {
        ll value = k / d;
        if (value != prevValue) {
            distinctCount++;
            prevValue = value;
        }
    }

    cout << distinctCount << endl;

    return 0;
}
