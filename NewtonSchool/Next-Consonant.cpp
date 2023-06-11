#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

char solve(char ch) {
    if (ch == 'z') 
        return 'b';
    else if (ch == 'd' || ch == 'h' || ch == 'n' || ch == 't') 
        return ch + 2;
    else
        return ch + 1;
}
int main() {
    int n;
    cin >> n;
    char str[30001];
    cin >> str;
    char result[30001];
    int i = 0;
    while (str[i] != '\0') {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    int j = 0;
    while (result[j] != '\0') {
        if (result[j] == 'a' || result[j] == 'e' || result[j] == 'i' || result[j] == 'o' || result[j] == 'u') {
            result[j] = solve(result[j]);
        }
        j++;
    }
    int k = 0;
    while (result[k] != '\0') {
        cout << result[k];
        k++;
    }
    cout << endl;
    return 0;
}
