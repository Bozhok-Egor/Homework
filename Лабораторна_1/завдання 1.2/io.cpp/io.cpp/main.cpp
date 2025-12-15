// main.cpp

int readNumber();      // объявление
void writeAnswer(int); // объявление

int main()
{
    int a = readNumber();
    int b = readNumber();

    int sum = a + b;

    writeAnswer(sum);
    return 0;
}
