#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
const int MOD = 1000000007;
int calculateNumberOfWays(int numSteps, int maxJump) {
    vector<int> dp(numSteps + 1, 0);
    dp[1] = 1;
    for (int i = 1; i <= numSteps; ++i) {
        for (int j = 1; j <= maxJump && i + j <= numSteps; ++j) {
            dp[i + j] = (dp[i + j] + dp[i]) % MOD;
        }
    }
    return dp[numSteps];
}

int main() {
    int numSteps, maxJump;
    cin >> numSteps >> maxJump;
    int ways = calculateNumberOfWays(numSteps, maxJump);
    cout << ways;
    return 0;
}
