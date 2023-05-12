#include <bits/stdc++.h>
using namespace std;
int main() {
   string input;
   cin >> input;
   int count = 0;
   while (input.size() > 1) {
       int sum = 0;
       for (auto digit : input) {
           sum += digit - '0';
       }
       count++;
       input = to_string(sum);
   }
   cout << count << endl;
   return 0;
}
