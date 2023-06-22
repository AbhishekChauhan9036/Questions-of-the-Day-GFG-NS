#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    using namespace std;
    long long arr[3];
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    long long ans = ((arr[0] + arr[2] - 1) / arr[2]) * arr[2];
    while (ans <= arr[1]) {
        ans += arr[2];
    }
    cout << ans << endl;
    return 0;
}
