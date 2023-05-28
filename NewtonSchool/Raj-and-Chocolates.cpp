#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> chocolates(n);
    for (int i = 0; i < n; i++) {
        cin >> chocolates[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += chocolates[i];
    }
    int averageDown = sum / n;
    int averageUp = averageDown + 1;
    int costDown = 0;
    int costUp = 0;
    for (int i = 0; i < n; i++) {
        costDown += abs(chocolates[i] - averageDown);
        costUp += abs(chocolates[i] - averageUp);
    }
    int minCost = min(costDown, costUp);
    cout << minCost << endl;
    return 0;
}
