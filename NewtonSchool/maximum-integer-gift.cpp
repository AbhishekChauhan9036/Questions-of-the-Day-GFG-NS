
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int max_integer = max({X + Y, X - Y, X * Y});

    cout << max_integer << endl;

    return 0;
}

