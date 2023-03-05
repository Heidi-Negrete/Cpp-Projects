// AverageCalculator.cpp : This program calculates and prints the average of numbers inputed by the user.
// WARNING: NO TYPECHECKING OR VALIDATION

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string userInput;
double observations, numberSum, numberAverage, numberInput;

void processInput() {
	stringstream(userInput) >> numberInput;
	numberSum += numberInput;
	observations += 1;
}

int main()
{
	cout << "Average number calculator. Input your first number to begin.\n";
	getline(cin, userInput);
	processInput();
	cout << "Input your second number.\n";
	getline(cin, userInput);
		while (userInput != "c") {
			processInput();
			cout << "Input the next number or \"c\" to calculate.\n";
			getline(cin, userInput);
		} 
		numberAverage = numberSum / observations;
		cout << "Your number is ";
		cout << numberAverage;
		return 0;
}
