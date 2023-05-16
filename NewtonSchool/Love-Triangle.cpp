#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int numStudents;
    std::cin >> numStudents;

    int likes[5001];
    for (int i = 1; i <= numStudents; i++) {
        std::cin >> likes[i];
    }

    int flag = 0;
    for (int i = 1; i <= numStudents; i++) {
        if (likes[likes[likes[i]]] == i) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
