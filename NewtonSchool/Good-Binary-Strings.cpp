#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int zero = 0, ones = 0, both = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (s.find('0') != string::npos)
                zero++;

            if (s.find('1') != string::npos)
                ones++;

            if (s.find('0') != string::npos && s.find('1') != string::npos)
                both++;
        }

        int ans = zero * (zero - 1) / 2 + ones * (ones - 1) / 2 - both * (both - 1) / 2;
        cout << ans << endl;
    }

    return 0;
}
