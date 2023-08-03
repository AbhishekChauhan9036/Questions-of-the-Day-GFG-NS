#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool solve(char c) {
    return (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
    string k1;
    cin >> k1;
    unordered_set<char> k2;
    for (char k3 : k1) {
        if (solve(k3)) {
            k2.insert(k3);
        }
    }
    cout << k2.size() << endl;
    return 0;
}
