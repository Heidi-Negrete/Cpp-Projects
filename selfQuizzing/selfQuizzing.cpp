#include <iostream>

/*
* PROGRAM 1: TRACK VARIABLE LIFECYCLE
void getInt(int &yourInt) // pass by reference
{
	std::cout << "Input an integer.\n";
	std::cin >> yourInt;
}

int main()
{
	int smaller{};
	int larger{};
	getInt(smaller);
	getInt(larger);
	if (smaller > larger)
	{
		int temp{ smaller };
		smaller = larger;
		larger = temp;
	} // temp is deallocated here.
	std::cout << "The smaller int is " << smaller << " and the larger int is " << larger << ".\n";
} // smaller & larger are deallocated here.
*/

/*
* PROGRAM TWO: SWITCH STRUCTURE
int calculate(int a, int b, char sign) {
	switch (sign)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		std::cerr << "calculate(): Unhandled case\n";
		return 0;
	}
}

int main()
{
	std::cout << "Enter your first number.\n";
	int firstNumber{};
	std::cin >> firstNumber;

	std::cout << "Enter your second number.\n";
	int secondNumber{};
	std::cin >> secondNumber;

	std::cout << "Enter your mathematical operator: +, -, *, or /.\n";
	char mathOp{};
	std::cin >> mathOp;

	std::cout << firstNumber << ' ' << mathOp << ' ' << secondNumber << " is " << calculate(firstNumber, secondNumber, mathOp) << '\n';

	return 0;
}
*/

/*
*Program 3: Use a loop to print the letters a - z along with their ASCII codes.
int main()
{
	char myChar{ 'a' };
	while (myChar <= 'z')
	{
	std::cout << myChar << " has an ASCII code of " << static_cast<int>(myChar) << "\n";
	++myChar;
	}
}
*/

/*
*Program 4: Loop pattern #1
int main()
{
	int count{ 5 };
	while (count >= 1)
	{
		int innerCount{ count };
		while (innerCount >= 1)
		{
			std::cout << innerCount-- << ' ';
		}
		std::cout << '\n';
		--count;
	}
	return 0;
}
*/

/*
* Program 5: Loop pattern #5
int main()
{
	int outer{ 1 };
	while (outer <= 5)
	{
		int inner{ 5 };
		while (inner >= 1)
		{
			if (inner <= outer)
			{
				std::cout << inner <<  ' ';
			}
			else
			{
				std::cout << "  ";
			}
			--inner;
		}
		++outer;
		std::cout << '\n';
	}
	return 0;
}
*/
/*
* Program 6: for loop that prints every even number from 0 to 20
int main()
{
	for (int i = 0; i <= 20; i+= 2)
	{
			std::cout << i << '\n';
	}
}
*/

/*
* Program 7: make function that takes an integer parameter named value and returns the sum of all numbers from 1 to value (ex sumTo(5) should return 15 which is 1+2+3+4+5)
int sumTo(int value)
{
	int total{ 0 };
	for (int i = 1; i <= value; i++)
	{
		total += i;
	}
	return total;
}
int main()
{
	std::cout << sumTo(8);
}
*/