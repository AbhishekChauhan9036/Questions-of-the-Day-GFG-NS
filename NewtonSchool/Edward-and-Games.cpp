#include <bits/stdc++.h>
using namespace std;

#define ll long long

signed main() {
    ll starting_num, target_num, moves = 0;
    cin >> starting_num >> target_num;

    if (starting_num == target_num) {
        cout << 0 << endl;
    } else if (target_num % starting_num != 0) {
        cout << -1 << endl;
    } else {
        ll factor = target_num / starting_num;
        while (factor % 2 == 0) {
            factor /= 2;
            moves++;
        }
        while (factor % 3 == 0) {
            factor /= 3;
            moves++;
        }
        if (factor != 1) {
            moves = -1;
        }
        cout << moves << endl;
    }
    return 0;
}
