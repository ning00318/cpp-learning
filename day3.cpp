#include <iostream>
#include <string>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int a, b, c;
    bool isContinue = true;
    char d;

    do {
        cout << "Please enter two number:" << endl;
        cin >> a >> b;
        cout << "Please choose an option to calculate:" << endl;
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power"<< endl;
        cin >> c;

        if (c == 1)
            cout << "Result: " << add(a, b) << endl;
        else if (c == 2)
            cout << "Result: " << subtract(a, b) << endl;
        else if (c == 3)
            cout << "Result: " << multiply(a, b) << endl;
        else if (c == 4) {
            if (b == 0)
                cout << "Cannot divide by zero" << endl;
            else
                cout << "Result: " << divide(a, b) << endl;
        }
        else if (c == 5)
            cout << "Result: " << power(a, b) << endl;
        else
            cout << "Invalid option" << endl << endl;

        cout << "Do another calculation? (y/n)" << endl;
        cin >> d;
        if (d == 'n' || d == 'N')
            isContinue = false;
    } while (isContinue);

    return 0;
}