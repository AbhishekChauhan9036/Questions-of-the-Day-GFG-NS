
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    // Your code here
    int n, K;
    cin >> n >> K;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l - 1; j <= r - 1; j++) {
            arr[j] ^= K;
        }
    }

    long long sum = 0;
    for (int num : arr) {
        sum += num;
    }

    cout << sum << endl;
    return 0;
}

