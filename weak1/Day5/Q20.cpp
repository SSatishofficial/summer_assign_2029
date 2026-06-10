#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num, largest = -1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largest = i;
        }
    }

    if (largest != -1)
        cout << "Largest prime factor = " << largest << endl;
    else
        cout << "No prime factors found." << endl;

    return 0;
}
