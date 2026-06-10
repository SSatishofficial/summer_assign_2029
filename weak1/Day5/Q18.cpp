#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int num, originalNum, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is a Strong number." << endl;
    else
        cout << originalNum << " is not a Strong number." << endl;

    return 0;
}
