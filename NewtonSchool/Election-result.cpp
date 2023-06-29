#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int remaining_votes = c1 - (c2 + c3);
    if (c2 > c3) {
        if (c2 > remaining_votes) {
            cout << c2 << endl;
        } else {
            cout << remaining_votes << endl;
        }
    } else {
        if (c3 > remaining_votes) {
            cout << c3 << endl;
        } else {
            cout << remaining_votes << endl;
        }
    }
    return 0;
}
