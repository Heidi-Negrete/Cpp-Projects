// Simulates a ball being dropped off a tower. Assume normal gravity and that the ball has no initial velocity.
// Program to be improved later.

#include <iostream>

double getTowerHeight() {
    std::cout << "What is the height of your tower in meters? ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}



double ballHeight(double towerHeight, int seconds) {
    constexpr double GRAVITY{ 9.8 }; // Gravity is = 9.8m /s^2

    // distance fallen = gravity_constant * x_seconds^2 / 2
    const double distanceFallen{ GRAVITY * (seconds * seconds) / 2.0 };
    const double currentHeight{ towerHeight - distanceFallen };

    return currentHeight;
}

int main()
{
}
