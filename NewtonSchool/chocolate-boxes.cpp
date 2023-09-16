
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end(), greater<int>());

    int left = 0;          // Pointer for the heaviest chocolate
    int right = n - 1;     // Pointer for the lightest chocolate
    int boxes = 0;

    while (left <= right) {
        if (weights[left] + weights[right] <= W) {
            // Combine the heaviest and lightest chocolates in one box
            left++;
            right--;
        } else {
            // Only place the heaviest chocolate in the box
            left++;
        }
        boxes++;
    }

    cout << boxes << endl;

    return 0;
}
