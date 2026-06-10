#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int binary[32], i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    cout << "Binary = ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
    return 0;
}
