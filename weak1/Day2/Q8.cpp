#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store original number

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (original == rev)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}
