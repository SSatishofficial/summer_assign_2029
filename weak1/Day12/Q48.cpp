#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfect(n))
        cout << n << " is a Perfect number." << endl;
    else
        cout << n << " is not a Perfect number." << endl;
    return 0;
}
