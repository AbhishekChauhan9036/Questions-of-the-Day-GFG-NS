#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string changeCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout<<changeCase(s);
    return 0;
}
