// Simulates a ball being dropped off a tower. Assume normal gravity and that the ball has no initial velocity.

#include <iostream>

double getTowerHeight() {
    std::cout << "What is the height of your tower? ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

// distance fallen = gravity_constant * x_seconds^2 / 2

int main()
{
    std::cout << "Hello World!\n";
}
