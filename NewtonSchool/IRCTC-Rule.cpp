#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int h1, h2, h3, h4, h5;
    cin >> h1 >> h2 >> h3 >> h4 >> h5;
    int ans = h1 + h2 + h3 - min({h1, h2, h3});
    if (ans <= h4 && min({h1, h2, h3}) <= h5) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
