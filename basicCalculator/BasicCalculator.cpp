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

void calculateOperation(double x, double y, char opChar) {
	if (opChar == '-')
		std::cout << x - y << "\n";
	else if (opChar == '+')
		std::cout << x + y << "\n";
	else if (opChar == '*')
		std::cout << x * y << "\n";
	else if (opChar == '/')
		std::cout << x / y << "\n";
}

int main()
{
	double firstDouble{ getDouble() };
	double secondDouble{ getDouble() };

	char userOperator{ getOperator() };

	calculateOperation(firstDouble, secondDouble, userOperator);

	return 0;
}