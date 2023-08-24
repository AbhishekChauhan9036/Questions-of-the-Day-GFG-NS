#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    string k1, k2;
    getline(cin, k1);
    getline(cin, k2);
    for (char &c : k1) {
        c = tolower(c);
    }
    for (char &c : k2) {
        c = tolower(c);
    }
    int k3 = 0;
    for (size_t k4 = 0; k4 < k1.length(); k4++) {
        if (k1[k4] != k2[k4]) {
            k3++;
        }
    }
    cout << k3 << endl;
    return 0;
}
