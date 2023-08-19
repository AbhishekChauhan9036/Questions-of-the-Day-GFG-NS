#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int findSecondLastIndex(const std::vector<int>& arr, int x) {
    int n = arr.size();
    int lastIdx = -1;
    int secondLastIdx = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            secondLastIdx = lastIdx;
            lastIdx = i;
        }
    }

    return secondLastIdx;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int x;
    std::cin >> x;

    int result = findSecondLastIndex(arr, x);
    std::cout << result << std::endl;

    return 0;
}
