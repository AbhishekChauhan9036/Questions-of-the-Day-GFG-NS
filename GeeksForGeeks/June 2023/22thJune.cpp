
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int countFive = 0, countTen = 0, countTwenty = 0;

    // Check if the first customer pays with a $10 or $20 bill, which cannot be given change
    if (bills[0] == 10 || bills[0] == 20)
        return false;

    for (int i = 0; i < N; i++) {
        if (bills[i] == 5) {
            countFive++;  // Increase count of $5 bills
        } else if (bills[i] == 10) {
            if (countFive > 0) {
                countFive--;  // Use a $5 bill to give change for $10
                countTen++;   // Increase count of $10 bills
            } else {
                return false;  // Unable to give change for $10
            }
        } else if (bills[i] == 20) {
            if (countFive > 0 && countTen > 0) {
                countTen--;   // Use a $10 bill
                countFive--;  // Use a $5 bill
            } else if (countFive > 2 && countTen == 0) {
                for (int j = 0; j < 3; j++)
                    countFive--;  // Use three $5 bills
            } else {
                return false;  // Unable to give change for $20
            }
        }
    }

    return true;  // All customers were able to receive correct change
    }
};
