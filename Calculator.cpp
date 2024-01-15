#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function declarations for core calculator operations (Mir Fahad)
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

// Function declarations for advanced operations (Momina)
double power(double base, double exponent)
double squareRoot(double num);
double inverse(double num);
double factorial(int num)
{
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers" << endl;
        return NAN; // Handle negative factorial
    }
    else {
        double result = 1;
        for (int i = 2; i <= num; i++) {
            result *= i;
        }
        return result;
    }
}

// Function declarations for input validation and handling (Momina)
bool isValidNumber(const string& input);
double getNumberFromUser(const string& prompt);
void displayMenu();
void runCalculator();

int main()
{
	// Implemnation of Main (Mir Fahad)
}