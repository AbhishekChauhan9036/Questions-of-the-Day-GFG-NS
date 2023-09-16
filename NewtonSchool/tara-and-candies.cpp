
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    int candies = n;
    int wrappers = n;
    
    while (wrappers >= 3) {
        int extraCandies = wrappers / 3;
        candies += extraCandies;
        wrappers = wrappers % 3 + extraCandies;
    }
    
    cout << candies << endl;
    
    return 0;
}
