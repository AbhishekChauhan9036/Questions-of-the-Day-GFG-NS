#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Check if Rahul can successfully steal all the candies
    if (n >= m) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
