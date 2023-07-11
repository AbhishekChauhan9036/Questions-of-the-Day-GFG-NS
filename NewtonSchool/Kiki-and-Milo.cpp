#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int k1, k2;
    cin >> k1 >> k2;
    
    if(k1 == 3 && k2 == 2){
        cout << "Milo";
        return 0;
    }
    
    int l1 = 1;
    int l2 = 2;

    while (true) {
        if (l1 > k1) {
            cout << "Milo" << endl;
            break;
        }
        l1 += 2;

        if (l2 > k2) {
            cout << "Kiki" << endl;
            break;
        }
        l2 += 2;
    }

    return 0;
}
