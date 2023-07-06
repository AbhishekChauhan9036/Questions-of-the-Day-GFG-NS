#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long o1;
    cin >> o1;
    long long o2;
    if (o1 == 1) {
        o2 = 2;
    } else if (o1 == 3) {
        o2 = 1;
    } else if (o1 <= 5) {
        o2 = (o1 + 1) / 2;
    } else {
        if (o1 % 3 == 0)
            o2 = o1 / 3;
        else
            o2 = o1 / 3 + 1;
    }
    cout << o2 << endl;
    return 0;
}
