#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int arrivalTimes[n];
    int departureTimes[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arrivalTimes[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> departureTimes[i];
    }

    std::sort(arrivalTimes, arrivalTimes + n);
    std::sort(departureTimes, departureTimes + n);

    int doctorsRequired = 0;
    int maxDoctors = 0;
    int arrivalIndex = 0;
    int departureIndex = 0;

    while (arrivalIndex < n && departureIndex < n) {
        if (arrivalTimes[arrivalIndex] <= departureTimes[departureIndex]) {
            doctorsRequired++;
            arrivalIndex++;

            if (doctorsRequired > maxDoctors) {
                maxDoctors = doctorsRequired;
            }
        } else {
            doctorsRequired--;
            departureIndex++;
        }
    }
    std::cout << maxDoctors << std::endl;

    return 0;
}
