#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    bool isYes = (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) 
    ||(num1 == num2 - num3 || num2 == num1 - num3 || num3 == num1 - num2);
    cout << (isYes ? "Yes" : "No") << endl;
    return 0;
}
