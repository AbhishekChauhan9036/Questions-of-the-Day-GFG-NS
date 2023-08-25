#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int commonDiff = (arr[n - 1] - arr[0]) / n;
    int missingNumber = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] != commonDiff) {
            missingNumber = arr[i - 1] + commonDiff;
            break;
        }
    }
    if (missingNumber == -1) {
        missingNumber = arr[0] - commonDiff;
    }
    cout << missingNumber << endl;
    return 0;
}
