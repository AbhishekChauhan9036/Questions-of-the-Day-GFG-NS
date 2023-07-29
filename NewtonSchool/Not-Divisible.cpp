#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
long long int solve(long long int x, int m1) {
    return x - x / m1;
}
int main() {
    int m1, m2;
    cin >> m1 >> m2;
    long long int low = 1, high = 1e18, ans;
    while (low <= high) {
        long long int mid = (low + high) / 2;
        if (solve(mid, m1) >= m2 + m1) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
