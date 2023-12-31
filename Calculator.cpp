#include <iostream>
using namespace std;

int main() {
    char operation;
    double n1, n2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first numbers: ";
    cin >> n1;
    cout << "Enter second numbers: ";
    cin >> n2;

    switch (operation) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}