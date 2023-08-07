#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int d1, s1, d2, s2;
    cin >> d1 >> s1 >> d2 >> s2;

    double total_distance = d1 + d2;
    double total_time = (double)d1 / s1 + (double)d2 / s2;
    double average_speed = total_distance / total_time;

    cout << fixed << setprecision(2) << average_speed << endl;

    return 0;
}
