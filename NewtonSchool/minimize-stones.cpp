#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int count = 0;
    while (s > 0) {
        int stones = s / n;
        count += stones;
        s -= stones * n;
        n--;
    }
    cout<<count<<endl;
    return 0;
}
