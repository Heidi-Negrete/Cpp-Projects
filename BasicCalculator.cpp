#include <iostream>
#include <string>

double getDouble() {
	std::cout << "Enter a number. ";
	double userNumber{};
	std::cin >> userNumber;
	return userNumber;
}

char getOperator() {
	std::cout << "Enter -, +, *, or / to begin your operation.";
	char userOperator{};
	std::cin >> userOperator;
	return userOperator;
}

int main()
{

}