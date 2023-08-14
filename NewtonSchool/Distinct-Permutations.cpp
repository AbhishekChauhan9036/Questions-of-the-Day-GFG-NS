#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

const int MOD = 1000000007;
int k1 = 0;
void calculateDistinctPermutations(int k2, string &k3, unordered_map<char, int> &k4) {
    if (k2 == k3.length()) {
        k1 = (k1 + 1) % MOD;
        return;
    }
    for (auto &k5 : k4) {
        if (k5.second > 0) {
            k5.second--;
            k3[k2] = k5.first;
            calculateDistinctPermutations(k2 + 1, k3, k4);
            k3[k2] = ' '; 
            k5.second++;
        }
    }
}
int main() {
    string k6;
    cin >> k6;
    unordered_map<char, int> k7;
    for (char k : k6) {
        k7[k]++;
    }
    calculateDistinctPermutations(0, k6, k7);
    cout << k1 << endl;
    return 0;
}
