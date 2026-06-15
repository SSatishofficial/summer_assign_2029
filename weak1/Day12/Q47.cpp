#include <iostream>
using namespace std;

void fibonacci(int terms) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= terms; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
