#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N > 9 * 10 / 2) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> digits;
    int digitSum = 0;
    for (int i = 9; i >= 1; i--) {
        if (digitSum + i <= N) {
            digits.push_back(i);
            digitSum += i;
        }
    }

    if (digitSum < N) {
        digits.push_back(N - digitSum);
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
    cout << endl;

    return 0;
}
