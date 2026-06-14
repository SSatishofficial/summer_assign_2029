#include <iostream>
using namespace std;

void sumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sumAndAverage(arr, n);
    return 0;
}
