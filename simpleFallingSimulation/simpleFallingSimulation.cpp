// Simulates a ball being dropped off a tower. Assume normal gravity and that the ball has no initial velocity.
// Program to be improved later.

#include <iostream>

double getTowerHeight() {
    std::cout << "What is the height of your tower in meters? ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}



double calculateHeight(double towerHeight, int seconds) {
    constexpr double GRAVITY{ 9.8 }; // Gravity is = 9.8m /s^2

    // distance fallen = gravity_constant * x_seconds^2 / 2
    const double distanceFallen{ (GRAVITY * (seconds * seconds)) / 2.0 };
    const double currentHeight{ towerHeight - distanceFallen };

    return currentHeight;
}

void findAndPrintHeight(int seconds, double towerHeight) {
    const double height{ calculateHeight(towerHeight, seconds) };
    if (height > 0.0)
        std::cout << "At " << seconds << ", the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << ", the ball is on the ground.\n";
}

int main()
{
    const double towerHeight{ getTowerHeight() };
    // to do: add looping to run this program for us automatically.
    findAndPrintHeight(0, towerHeight);
    findAndPrintHeight(1, towerHeight);
    findAndPrintHeight(2, towerHeight);
    findAndPrintHeight(3, towerHeight);
    findAndPrintHeight(4, towerHeight);
    findAndPrintHeight(5, towerHeight);
}
