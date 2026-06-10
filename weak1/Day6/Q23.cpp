#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        count += (num & 1); // check last bit
        num >>= 1;          // right shift
    }

    cout << "Number of set bits = " << count << endl;
    return 0;
}
