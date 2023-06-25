#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> numbers(num);
    for (int i = 0; i < num; i++) {
        cin >> numbers[i];
    }
    int count = 0;
    for (int j = 0; j < num; j++) {
        while (numbers[j] % 2 == 0) {
            numbers[j] /= 2;
            count++;
        }
    }
    sort(numbers.begin(), numbers.end());
    long long result = pow(2LL, count) * numbers[num - 1];
    for (int j = 0; j < num - 1; j++) {
        result += numbers[j];
    }
    cout << result;
    return 0;
}
