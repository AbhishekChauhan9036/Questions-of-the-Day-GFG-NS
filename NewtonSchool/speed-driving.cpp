#include <iostream>

using namespace std;

int main() {
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;

    int o1 = t1 / t2;
    int o2 = t3 / t4;

    if (o1 > o2) {
        cout << "Ram" << endl;
    } else if (o2 > o1) {
        cout << "Shyam" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}
