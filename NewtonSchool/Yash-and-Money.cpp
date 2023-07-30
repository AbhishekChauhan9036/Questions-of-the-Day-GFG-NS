#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int k1, k2, k3;
    cin >> k1 >> k2 >> k3;
    int k4 = k1 * k3;
    cout << ((k4 >= k2) ? "Yes" : "No") << endl;
    return 0;
}
