#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int solve(int k1, int k2) {
    if (k1 == k2) {
        return 0;
    }
    if (k1 > k2) {
        return INT_MAX;
    }
    
    int option1 = solve(k1 * 2, k2);
    int option2 = solve(k1 * 3, k2);
    
    int minSteps = min(option1, option2);
    
    if (minSteps == INT_MAX) {
        return minSteps;
    }
    
    return minSteps + 1;
}

int main() {
    int k1, k2;
    cin >> k1 >> k2;

    int result = solve(k1, k2);
    if (result == INT_MAX) {
        result = -1;
    }
    cout << result << endl;

    return 0;
}
