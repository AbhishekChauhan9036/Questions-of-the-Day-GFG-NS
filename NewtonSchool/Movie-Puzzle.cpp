#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int numPersons;
    cin >> numPersons;
    vector<pair<int, int>> timings;
    for (int i = 0; i < numPersons; i++) {
        int arrivalTime, departureTime;
        cin >> arrivalTime >> departureTime;
        timings.push_back(make_pair(arrivalTime, 1)); 
        timings.push_back(make_pair(departureTime, -1));
    }
    sort(timings.begin(), timings.end());
    int maxPersons = 0;
    int currentPersons = 0;
    for (int i = 0; i < timings.size(); i++) {
        currentPersons += timings[i].second;
        maxPersons = max(maxPersons, currentPersons);
    }
    cout << maxPersons << endl;
    return 0;
}
