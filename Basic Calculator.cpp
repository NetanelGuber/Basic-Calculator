#include <iostream>
#include <cmath>

using namespace std;

double calculate(double num1, double num2, string symbol) {
    if (symbol == "+") {
        return num1 + num2;
    }
    else if (symbol == "-") {
        return num1 - num2;
    }
    else if (symbol == "*") {
        return num1 * num2;
    }
    else if (symbol == "/") {
        if (num2 == 0) {
            cout << "\nDevision by 0 is invalid\n";

            return NAN;
        }

        return num1 / num2;
    }
    else {
        cout << "\nInvalid operator\n";

        return NAN;
    }
}

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    string symbol;

    cout << "What is your first number: ";
    cin >> num1;

    cout << "What is your second number: ";
    cin >> num2;

    cout << "What is your operator (+, -, *, /): ";
    cin >> symbol;

    cout << "\nAttempting to do " << num1 << symbol << num2 << "\n";
    cout << "The result is: " << calculate(num1, num2, symbol) << "\n";
}