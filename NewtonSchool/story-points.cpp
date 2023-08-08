#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int k1[4][5];
    string names[] = {"Himanshu", "Gorakh", "Vikas", "Hritvik"};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> k1[i][j];
        }
    }
    int maxPoints = 0;
    string winner = "";
    for (int i = 0; i < 4; ++i) {
        int totalPoints = 0;
        for (int j = 0; j < 5; ++j) {
            totalPoints += k1[i][j];
        }
        if (totalPoints > maxPoints) {
            maxPoints = totalPoints;
            winner = names[i];
        }
    }
    cout << winner << endl;
    return 0;
}
