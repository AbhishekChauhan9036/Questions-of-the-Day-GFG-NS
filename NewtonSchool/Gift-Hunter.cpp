#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int target_x, target_y, current_x = 0, current_y = 0;
    string path;
    cin >> target_x >> target_y >> path;
    for (char direction : path) {
        if (direction == 'L') current_x--;
        else if (direction == 'R') current_x++;
        else if (direction == 'D') current_y--;
        else if (direction == 'U') current_y++;
        if (current_x == target_x && current_y == target_y) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
