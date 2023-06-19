#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int totalPeople, minPeopleInFront, maxPeopleBehind;
    cin >> totalPeople >> minPeopleInFront >> maxPeopleBehind;
    int numPositions = 0;
    for (int i = 1; i <= totalPeople; i++) {
        int peopleInFront = i - 1;
        int peopleBehind = totalPeople - i;
        if (peopleInFront >= minPeopleInFront && peopleBehind <= maxPeopleBehind) {
            numPositions++;
        }
    }
    cout << numPositions << std::endl;
    return 0;
}
