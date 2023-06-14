#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int n;
    cin >> n;
    string inputWord;
    getline(cin, inputWord); 
    for (int i = 0; i < n; ++i) {
        getline(cin, inputWord);
        if (inputWord.length() > 10) {
            string abbreviation;
            abbreviation.push_back(inputWord.front());
            abbreviation += to_string(inputWord.length() - 2);
            abbreviation.push_back(inputWord.back());
            cout << abbreviation << endl;
        } else {
            cout << inputWord << endl;
        }
    }
    return 0;
}
