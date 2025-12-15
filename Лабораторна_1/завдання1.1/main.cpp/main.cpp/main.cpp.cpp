#include <iostream>
using namespace std;

int readNumber() {
    int x;
    cin >> x;
    return x;
}

void writeAnswer(int x) {
    cout << x;
}

int main() {
    writeAnswer(readNumber() + readNumber());
}
