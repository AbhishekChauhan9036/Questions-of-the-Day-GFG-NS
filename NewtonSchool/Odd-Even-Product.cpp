#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int k1;
    cin >> k1;
    
    int k2 = 0;
    int k3 = 0;
    
    while (k1 > 0) {
        int k4 = k1 % 10;
        if (k4 % 2 == 0) {
            k3 += k4;
        } else {
            k2 += k4;
        }
        k1 /= 10;
    }
    
    int k5 = k2 * k3;
    cout << k5 << endl;
    
    return 0;
}
