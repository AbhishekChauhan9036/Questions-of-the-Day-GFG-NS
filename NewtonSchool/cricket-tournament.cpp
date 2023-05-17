#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long
signed main() {
	int teamn;
    cin >> teamn;
    int ans = (teamn * (teamn - 1)) / 2 * 2;
    cout << ans;
    return 0;
}
