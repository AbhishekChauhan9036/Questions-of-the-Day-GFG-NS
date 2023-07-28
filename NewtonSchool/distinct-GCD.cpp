#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

#include <iostream>

using namespace std;

bool canConstructArray(int N, int X, int Y) {
    if (N > Y - X + 1)
        return false;

    if (N == 1)
        return true;

    if (N == 2)
        return true;

    return true;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    if (canConstructArray(N, X, Y))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
