#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int arr[15][20000];
int main() {
    memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= 10000; i++) {
        arr[1][i] = 1;
    }
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 30; j++) {
            for (int k = 0; k <= 30; k++) {
                arr[i][i * j + k * 10] = 1;
            }
        }
    }
    int n, d, x;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout<<((x >= d * 10 || arr[d][x] == 1)?"YES\n":"NO\n");
    }
    return 0;
}
