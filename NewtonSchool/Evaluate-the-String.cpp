#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    string inputString;
    cin >> inputString;
    int firstDigit = inputString[0] - '0';
    int secondDigit = inputString[2] - '0';
    cout<<firstDigit * secondDigit<<endl;
    return 0;
}
