#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> player1(n);
    vector<int> player2(n);
    for (int i = 0; i < n; ++i) {
        cin >> player1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> player2[i];
    }
    unordered_set<int> player1Set(player1.begin(), player1.end());
    unordered_set<int> player2Set(player2.begin(), player2.end());

    if (player1Set.size() > player2Set.size()) {
        cout<<"Alexa";
    } else if (player1Set.size() < player2Set.size()) {
        cout<<"Bob";
    } else {
        cout<<"Draw";
    }

    return 0;
}
