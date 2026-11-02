#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "Average = " << average;

    return 0;
}