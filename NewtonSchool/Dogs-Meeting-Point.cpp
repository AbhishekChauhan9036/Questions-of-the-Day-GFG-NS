#include <bits/stdc++.h> // header file includes every Standard library
#define int long long
using namespace std;
signed main() {
    int positionFido, positionRover, distanceFido, distanceRover;
    cin >> positionFido >> positionRover >> distanceFido >> distanceRover;
    int time = -1; 
    if ((positionRover - positionFido) % (distanceFido + distanceRover) == 0) {
        time = (positionRover - positionFido) / (distanceFido + distanceRover);
    }
    cout << time;
    return 0;
}
