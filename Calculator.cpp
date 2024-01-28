#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function declarations for core calculator operations (Mir Fahad)

// Function declarations for advanced operations (Momina)
double power(double base, double exponent)


// Function declarations for input validation and handling (Momina)
bool isValidNumber(const string& input) {
    for (char c : input) {
        if (!isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}
double getNumberFromUser(const string& prompt) {
    string input;
    do {
        cout << prompt;
        getline(cin, input);
    } while (!isValidNumber(input));
    return stod(input);
}
void displayMenu() {
    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Inverse" << endl;
    cout << "8. Factorial" << endl;
    cout << "9. Exit" << endl;
}
void runCalculator();

int main() {
    runCalculator();
    return 0;
}