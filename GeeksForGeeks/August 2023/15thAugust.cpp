class Solution {
public:
    int maxOnes(int a[], int n) {
        int ans = 0, zero = 0, one = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                zero++;
            } else {
                zero--;
                one++;
            }
            ans = max(zero, ans);
            if (zero < 0) {
                zero = 0;
            }
        }
        return ans + one;
    }
};
