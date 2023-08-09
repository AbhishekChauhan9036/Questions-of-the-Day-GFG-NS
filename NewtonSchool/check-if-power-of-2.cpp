#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

bool isPowerOf2(long long x) {
    return (x != 0) && ((x & (x - 1)) == 0);
}

int main() {
    long long x;
    std::cin >> x;
    
    if (isPowerOf2(x)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    
    return 0;
}
