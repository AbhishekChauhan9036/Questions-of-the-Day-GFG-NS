#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int calculateDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isNumberGood(int num) {
    int sum1 = calculateDigitSum(num);
    int sum2 = calculateDigitSum(num + 1);
    return sum2 < sum1;
}

int countGoodNumbers(int N) {
    int count = 0;
    for (int num = 1; num <= N; num++) {
        if (isNumberGood(num))
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    if (n < 10000000) {
        cout << countGoodNumbers(n);
        return 0;
    }
    string str = to_string(n);
    string newStr = str.substr(0, str.length() - 1);
    cout << newStr;
    return 0;
}
