#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

char findAddedLetter(string s, string t) {
    char result = 0;
    
    for (char c : s) {
        result ^= c;
    }
    
    for (char c : t) {
        result ^= c;
    }
    
    return result;
}

int main() {
    string s, t;
    cin >> s >> t;

    char addedLetter = findAddedLetter(s, t);
    cout << addedLetter << endl;

    return 0;
}
