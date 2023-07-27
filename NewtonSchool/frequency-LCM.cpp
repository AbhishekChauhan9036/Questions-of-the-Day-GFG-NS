#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int findGCD(int a, int b) {
    return (b == 0) ? a : findGCD(b, a % b);
}
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}
int calculateFrequencyLCM(const string& inputString) {
    unordered_map<char, int> freqMap;
    for (char c : inputString) {
        freqMap[c]++;
    }
    int result = freqMap[inputString[0]];
    for (const auto& entry : freqMap) {
        result = findLCM(result, entry.second);
    }
    return result;
}

int main() {
    string inputString;
    cin >> inputString;
    int result = calculateFrequencyLCM(inputString);
    cout << result << endl;
    return 0;
}
