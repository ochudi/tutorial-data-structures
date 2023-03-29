#include <iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
        break;

    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
        break;

    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
        break;

    case '/':
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result;
        break;

    default:
        cout << "Invalid operator!";
        break;
    }
    cout << "\nThank you!\n"
         << endl;

    return 0;
}
