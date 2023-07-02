#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int p1, p2;
    cin >> p1 >> p2;
    int p3 = p1 * p2;
    int p4 = 0;
    int p5 = p3;
    while (p5 != 0) {
        p5 /= 10;
        p4++;
    }
    cout<<((p4 == 5)?"yes":"no");
    return 0;
}
