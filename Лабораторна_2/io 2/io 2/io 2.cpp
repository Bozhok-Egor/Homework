#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter a double value: ";
    cin >> a;

    cout << "Enter a second double value: ";
    cin >> b;

    cout << "Enter one of the following: +, -, *, or /: ";
    cin >> op;

    if (op == '+') {
        cout << a << " + " << b << " = " << a + b;
    }
    else if (op == '-') {
        cout << a << " - " << b << " = " << a - b;
    }
    else if (op == '*') {
        cout << a << " * " << b << " = " << a * b;
    }
    else if (op == '/') {
        cout << a << " / " << b << " = " << a / b;
    }
    // якщо символ некоректний — нічого не виводимо

    return 0;
}