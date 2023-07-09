#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int N;
    cin >> N;
    string winner;
    if (N % 2 == 0) {
        winner = "Rahul";
    } else {
        winner = "Abhilash";
    }

    cout << winner <<endl;
    return 0;
}
