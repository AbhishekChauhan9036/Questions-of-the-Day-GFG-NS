#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int n;
    cin >> n;
    string S;
    cin >> S;
    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < n; ++i) {
        if (S[i] == S[i - 1]) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    max_length = max(max_length, current_length);
    cout << max_length;
    return 0;
}
