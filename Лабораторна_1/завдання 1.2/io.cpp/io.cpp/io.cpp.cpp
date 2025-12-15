// io.cpp
#include <iostream>
using namespace std;

int readNumber()
{
    int x;
    cout << "Введіть ціле число: ";
    cin >> x;
    return x;
}

void writeAnswer(int x)
{
    cout << "Результат: " << x << endl;
}