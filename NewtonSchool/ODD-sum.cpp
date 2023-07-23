#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int k1, k2, k3;
    cin >> k1 >> k2 >> k3;
    auto solve = [](int t1, int t2) {
        return (t1 + t2) % 2 != 0;
    };
    cout << (solve(k1, k2) || solve(k1, k3) || solve(k2, k3) ? "YES" : "NO") <<endl;
    return 0;
}
