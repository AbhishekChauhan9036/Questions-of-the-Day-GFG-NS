#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> numbers;
    for (int i = 0; i < s.length(); i += 2) {
        numbers.push_back(s[i] - '0');
    }
    sort(numbers.begin(), numbers.end());
    string newSum;
    for (int i = 0; i < numbers.size(); i++) {
        newSum += to_string(numbers[i]);
        if (i < numbers.size() - 1) {
            newSum += "+";
        }
    }
    cout << newSum << endl;
    return 0;
}
