// AverageCalculator.cpp : This program calculates and prints the average of numbers inputed by the user.
// WARNING: NO TYPECHECKING OR VALIDATION

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string userInput{};
double observations{}; // an observation is the number of numbers to be averaged. The sum of numbers will be divided by the observation amount to achieve the average.
double numberSum{}; // sum of all numbers inputed by the user
double numberAverage{}; // the final result of average calculation
double numberInput{};	// location of user's input that has been converted to a number.

// process user's input from a string to double and add it to the sum, and increment number of observations.
void processInput() {
	stringstream(userInput) >> numberInput;
	numberSum += numberInput;
	observations += 1;
}

// produce average by taking the total sum of numbers inputted and dividing by the amount of numbers (observations).
void calculateAverage() {
	numberAverage = numberSum / observations;
}

int main()
{
	cout << "Average number calculator. Input your first number to begin.\n";
	getline(cin, userInput);
		while (userInput != "c") {
			processInput();
			cout << "Input the next number or \"c\" to calculate.\n";
			getline(cin, userInput);
		} 
		calculateAverage();
		cout << "The average of your numbers is " << numberAverage;
		return 0;
}
