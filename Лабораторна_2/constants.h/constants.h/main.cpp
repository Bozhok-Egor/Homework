#include <iostream>
#include "constants.h"

using namespace std;

// Функція обчислення висоти м'ячика через t секунд
double calculateHeight(double initialHeight, int seconds) {
    double fallenDistance = myConstants::gravity * seconds * seconds / 2.0;
    double height = initialHeight - fallenDistance;

    if (height < 0)
        return 0;

    return height;
}

int main() {
    double initialHeight;

    cout << "Enter the initial height of the tower in meters: ";
    cin >> initialHeight;

    for (int t = 0; t <= 5; ++t) {
        double height = calculateHeight(initialHeight, t);

        if (height == 0) {
            cout << "At " << t << " seconds, the ball is on the ground.\n";
        }
        else {
            cout << "At " << t << " seconds, the ball is at height: "
                << height << " meters\n";
        }
    }

    return 0;
}