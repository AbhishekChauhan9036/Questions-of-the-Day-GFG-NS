#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    int c4 = c1 + (c1 * c3) / 100;
    int c5 = c4 - (c4 * c3) / 100;
    int c6 = c1 - c5;
    int z1 = c6 * c2;

    cout << z1 << endl;

    return 0;
}
