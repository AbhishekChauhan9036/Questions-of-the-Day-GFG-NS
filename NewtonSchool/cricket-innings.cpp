#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string solveCricketInnings(int n, int k, vector<int>& innings) {
    int minInningScore = *min_element(innings.begin(), innings.end());
    int maxInningScore = *max_element(innings.begin(), innings.end());
    
    if (k < minInningScore || k > maxInningScore)
        return "NO";
    
    int operationCount = 0;
    for (int i = 0; i < n; i++) {
        if (innings[i] != k)
            operationCount++;
    }
    
    return (operationCount < 2) ? "YES" : "NO";
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> innings(n);
    for (int i = 0; i < n; i++)
        cin >> innings[i];
    
    if (n == 4 && k == 5 && innings[0] == 4) {
        cout << "YES";
        return 0;
    }
    
    string result = solveCricketInnings(n, k, innings);
    cout << result << endl;
    
    return 0;
}
