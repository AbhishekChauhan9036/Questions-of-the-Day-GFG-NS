#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int p1;
    cin >> p1;
    int p2 = 0;
    while (p1 > 0) {
        int p3 = p1 % 10;
        if (p3 % 2 != 0) {
            p2 += p3;
        }
        p1 /= 10;
    }
    for (int p4 = 0; p4 < p2; p4++) {
        cout << "8";
    }
    return 0;
}
