#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int matchesWonByAlexa, matchesTiedByAlexa, matchesWonByBob, matchesTiedByBob;
    cin >> matchesWonByAlexa >> matchesTiedByAlexa >> matchesWonByBob >> matchesTiedByBob;
    int alexaPoints = (2 * matchesWonByAlexa) + matchesTiedByAlexa; 
    int bobPoints = (2 * matchesWonByBob) + matchesTiedByBob; 

    if (alexaPoints > bobPoints) {
        cout << "Alexa" << endl;
    } else if (alexaPoints < bobPoints) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}
