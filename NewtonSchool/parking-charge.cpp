#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int charge1, charge2, hours;
    cin >> charge1 >> charge2 >> hours;
    int totalCost = charge1 + (hours - 1) * charge2;
    cout << totalCost << endl;
    return 0;
}
