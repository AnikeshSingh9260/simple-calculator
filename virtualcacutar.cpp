#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "\n\n\n\t\t\t\t SIMPLE C++ CALCULATAR" << endl;

    cout << "\n\t\t\t\t Enter first number: ";
    cin >> num1;
    cout << "\n\t\t\tEnter an operation (+, -, *,%, /): ";
    cin >> operation;
    cout << "\n\n\t\t\t\t Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
       
       
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "\t\tError: Invalid operation" << endl;
    }

    return 0;
}
