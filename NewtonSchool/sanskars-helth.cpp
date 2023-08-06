#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int p;
    cin >> p;
    cout << ((p % 2 == 0 || p % 3 == 0 || (p >= 5 && (p - 5) % 2 == 0)) ? "YES" : "NO") << endl;
    return 0;
}
