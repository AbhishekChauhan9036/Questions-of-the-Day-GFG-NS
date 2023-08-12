#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int n;
    cin >> n;
    int k1 = 0;
    for (int k2 = 2; k2 <= n; k2++) {
        while (n % k2 == 0) {
            k1 += k2;
            n /= k2;
        }
    }
    cout << k1 << endl;
    return 0;
}
