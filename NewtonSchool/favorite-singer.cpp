#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
    unordered_map<int, int> songCount;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int singer;
        cin >> singer;
        songCount[singer]++;
        maxCount = max(maxCount, songCount[singer]);
    }
    int favoriteSingers = 0;
    for (auto it : songCount) {
        if (it.second == maxCount) {
            favoriteSingers++;
        }
    }
    cout << favoriteSingers << endl;
    return 0;
}
