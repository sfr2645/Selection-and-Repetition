//This program will work as a calculator, allowing the user to input two numbers and an operator.
#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cin >> op;
    cin >> num1 >> num2;
    switch (op) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
    }

    return 0;
}