#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    using namespace std;
    string k1;
    cin >> k1;
    int k2 = 0;
    int k3 = 0;
    for (char k4 : k1) {
        k2 += islower(k4) ? 1 : 0;
        k3 += isupper(k4) ? 1 : 0;
    }
    for (char& k5 : k1) {
        k5 = (k2 == k3) ? toupper(k5) : (k2 > k3) ? tolower(k5) : toupper(k5);
    }
    cout << k1 << endl;
    return 0;
}
