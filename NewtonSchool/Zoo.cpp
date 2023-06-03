#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    string inputWord;
    cin >> inputWord;
    int zCount = 0;
    int oCount = 0;
    for (char c : inputWord) {
        if (c == 'z') {
            zCount++;
        } else if (c == 'o') {
            oCount++;
        }
    }
    cout<<((zCount * 2 == oCount) ? "Yes": "No"); 
    return 0;
}
