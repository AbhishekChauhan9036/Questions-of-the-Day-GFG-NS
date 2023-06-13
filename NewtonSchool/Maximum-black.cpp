#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        char row[21];
        for (int j = 0; j < m; j++) {
            cin >> row[j];
        }
        row[m] = '\0';
        grid[i] = row;
    }
    int maxConsecutive = 0;
    for (int i = 0; i < n; i++) {
        int consecutive = 0;
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                consecutive++;
                if (consecutive > maxConsecutive)
                    maxConsecutive = consecutive;
            } else {
                consecutive = 0;
            }
        }
    }
    cout << maxConsecutive << endl;
    return 0;
}
