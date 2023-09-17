
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << ((sum % 2 == 0) ? "Yes" : "No") << endl;
    return 0;
}

