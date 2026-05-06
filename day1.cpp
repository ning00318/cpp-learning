#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int target_num = rand() % 100 + 1;
    int guess_num;
    cout << "Welcome to the number guessing game!" << endl;
    cout << "Please enter a number between 1 to 100: ";
    cin >> guess_num;
    while (guess_num != target_num) {
        if (guess_num > target_num)
            cout << "Too big!" << endl;
        else
            cout << "Too small!" << endl;
        cout << "Please enter a number between 1 to 100: ";
        cin >> guess_num;
    }
    cout << "Correct!" << endl;
    return 0;
}
