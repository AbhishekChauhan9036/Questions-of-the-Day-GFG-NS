#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    // Your code here
    int a, b, c;
    cin >> a >> b >> c;
    int X = -1, Y = -1;
    for (int i = 1; i <= INT_MAX; i++) {
        if (i % c == 0 && (i < a || i > b)) {
            if (X == -1) {
                X = i;
            } else if (Y == -1) {
                Y = i;
                break;
            }
        }
    }
    cout << X << " " << Y << endl;
    
    return 0;
}
