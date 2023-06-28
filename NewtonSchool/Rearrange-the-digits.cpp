#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;


int main() {
    long long n;
    cin >> n;

    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    vector<int> oddDigits, evenDigits;
    for (int digit : digits) {
        if (digit % 2 == 0) {
            evenDigits.push_back(digit);
        } else {
            oddDigits.push_back(digit);
        }
    }

    reverse(oddDigits.begin(), oddDigits.end());
    reverse(evenDigits.begin(), evenDigits.end());

    long long rearrangedNumber = 0;
    for (int digit : oddDigits) {
        rearrangedNumber = rearrangedNumber * 10 + digit;
    }
    for (int digit : evenDigits) {
        rearrangedNumber = rearrangedNumber * 10 + digit;
    }

    cout << rearrangedNumber << endl;

    return 0;
}
