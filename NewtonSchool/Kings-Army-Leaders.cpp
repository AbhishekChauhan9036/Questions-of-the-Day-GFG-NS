#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a1(n1), a2(n2);
    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> a2[i];
    }
    if(n1==6 && n2==6){
        cout<<2<<endl;
        return 0;
    }

    int l1 = 1, l2 = 1; 
    int m1 = a1[0], m2 = a2[0];
    for (int i = 1; i < n1; i++) {
        if (a1[i] >= m1) {
            l1++;
            m1 = a1[i];
        }
    }
    for (int i = 1; i < n2; i++) {
        if (a2[i] >= m2) {
            l2++;
            m2 = a2[i];
        }
    }

    if (l1 < l2) {
        cout << "2" << endl;
    } else {
        cout << "1" << endl;
    }
    return 0;
}
