#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
  int company_1, company_2, company_3, company_4;
  cin >> company_1 >> company_2 >> company_3 >> company_4;

  int total_profit = company_1 + company_2 + company_3 + company_4;

  if (company_1 > total_profit - company_1 ||
      company_2 > total_profit - company_2 ||
      company_3 > total_profit - company_3 ||
      company_4 > total_profit - company_4) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
