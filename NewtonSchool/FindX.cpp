#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int find_min(int num1, int num2){
    if(num1 < num2) return num1;
    else return num2;
}

int main() {
    int num_iterations, limit, div_count = 0;
    cin >> limit >> num_iterations;
    for(int i = 1; i <= find_min(num_iterations, limit); i++){
        if(num_iterations % i == 0 && num_iterations / i <= limit){
            div_count++;
        }
    }
    cout << div_count;
    return 0;
}
