#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter n: ";
    cin >> n;

    if (n == 1) {
        cout << "Nth Fibonacci term = " << t1 << endl;
    } else if (n == 2) {
        cout << "Nth Fibonacci term = " << t2 << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << "Nth Fibonacci term = " << t2 << endl;
    }
    return 0;
}
