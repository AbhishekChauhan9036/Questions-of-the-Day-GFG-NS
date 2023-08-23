#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n, m;
    std::cin >> n >> m;
    int k = std::min(n, m);
    
    if (k % 2 == 1) {
        k--;
    }
    n -= k;
    m -= k;
    while (true) {
        if (n > 0) {
            n--;
        } else {
            std::cout << "Ram" << std::endl;
            break;
        }
        if (m > 0) {
            m--;
        } else {
            std::cout << "Shyam" << std::endl;
            break;
        }
        if (n > 0 && m > 0) {
            n--;
            m--;
        } else {
            std::cout << "Rahul" << std::endl;
            break;
        }
    }
    return 0;
}
