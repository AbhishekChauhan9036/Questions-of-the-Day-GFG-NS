#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    long long k1;
    cin >> k1;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    stringstream k2_ss;
    k2_ss << k1;
    string k2 = k2_ss.str();
    bool isEven = k1 % 2 == 0;
    for (int k4 = (isEven ? 0 : k2.size() - 1); isEven ? (k4 < k2.size()) : (k4 >= 0); isEven ? k4++ : k4--) {
        char k5 = k2[k4];
        if (k5 != ' ') {
            cout << arr[k5 - '0'] << " ";
        }
    }
    return 0;
}
