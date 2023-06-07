#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long
int solve(const vector<int>& nums) {
    unordered_set<int> uniqueSet;
    int smallestDuplicate = INT_MAX;
    for (int num : nums) {
        if (uniqueSet.count(num) > 0 && num < smallestDuplicate) {
            smallestDuplicate = num;
        }
        uniqueSet.insert(num);
    }
    if (smallestDuplicate != INT_MAX) {
        return smallestDuplicate;
    }
    return -1;
}

signed main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    int smallestDuplicate = solve(nums);
    cout << smallestDuplicate << endl;
    return 0;
}
