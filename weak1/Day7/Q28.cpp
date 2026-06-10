#include <iostream>
using namespace std;

int reverseNumber(int num, int rev = 0) {
    if (num == 0) return rev;   // base case
    return reverseNumber(num / 10, rev * 10 + num % 10);  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNumber(num) << endl;
    return 0;
}
