#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool solve(int k1) {
    unordered_set<int> s1;
    for (int i = 1; i <= k1; i++) {
        if (s1.count(i) > 0)
            return false;
        s1.insert(i);
    }
    return true;
}

int main() {
    int k1;
    cin >> k1;
    int k2 = k1 - 55;
    cout << (k1 < 55 || !solve(k2) ? "no" : "yes") << endl;
    return 0;
}
