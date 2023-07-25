#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
using namespace std;
int main() {
    int k1;
    cin >> k1;
    string k2 = to_string(k1);
    int k3 = 0;
    for (char k4 : k2) {
        if (k4 == '7') {
            k3++;
        }
    }
    cout << k3 << endl;
    return 0;
}
s
