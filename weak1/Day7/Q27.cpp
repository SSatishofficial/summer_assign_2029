#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;   // base case
    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num) << endl;
    return 0;
}
