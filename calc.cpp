#include <iostream>

using namespace std;

class Calculator {
public:
    static void multiply(int, int);
    static void divide(int, int);
    static void add(int, int);
    static void subtract(int, int);

};

void Calculator::multiply(int x, int y) {
    std::cout << x * y << std::endl;
}

void Calculator::divide(int x, int y) {
    std::cout << x / y << std::endl;
}

void Calculator::add(int x, int y) {
    std::cout << x + y << std::endl;
}

void Calculator::subtract(int x, int y) {
    std::cout << x - y << std::endl;
}

int main() {
    char c;
    int x, y;

    std::cout << "What do you want to solve: ";
    std::cin >> x >> c >> y;

    switch(c) {
        case '*':
            Calculator::multiply(x, y);
            break;

        case '/':
            Calculator::divide(x, y);
            break;

        case '+':
            Calculator::add(x, y);
            break;

        case '-':
            Calculator::subtract(x, y);
            break;
    }

    return 0;
}

