#include<iostream>
using namespace std;

int main() {
    int number, even = 0, odd = 0;
    while (true) {
        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}