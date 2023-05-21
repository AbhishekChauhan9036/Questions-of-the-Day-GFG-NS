#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long
signed main() {
    // Your code here
    int n;
    cin >> n;
    int count = 0;
    bool flag = true;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1 && flag && i != n - 1)
            count++;
        else
            flag = false;
    }
    cout<<((count % 2!= 1)?"First":"Second");
    return 0;
}
