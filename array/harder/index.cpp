
#include <iostream>
using namespace std;

int main() {
    int n, key, found = -1;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        cout << "Value found at index: " << found;
    }
    else {
        cout << "Value not found";
    }

    return 0;
}
