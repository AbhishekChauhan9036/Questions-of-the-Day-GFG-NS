#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int r1, r2;
    cin >> r1 >> r2;

    int r3 = 0;

    while (r1 < r2) {
        if (r1 + 2 <= r2) {
            r1 += 2;
        } else {
            r1 += 1;
        }
        r3++;
    }

    cout << r3 << endl;

    return 0;
}
