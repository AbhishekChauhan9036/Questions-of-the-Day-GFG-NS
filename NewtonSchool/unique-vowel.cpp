#include <iostream>
#include <unordered_set>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s;
    cin >> s;

    unordered_set<char> uniqueVowels;

    for (char c : s) {
        if (isVowel(c)) {
            uniqueVowels.insert(c);
        }
    }

    cout << uniqueVowels.size() << endl;

    return 0;
}
