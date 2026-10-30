#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

void shiftDown(int arr[], int n) {
    for (int i = n; i > 0; i--)      // peeche se shuru, warna values overwrite ho jayengi
        arr[i] = arr[i - 1];
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100];
    int n;

    cout << "How many numbers (max 99)? ";
    cin >> n;

    inputArray(arr, n);

    int sum = sumArray(arr, n);   // shift se pehle sum nikalein
    shiftDown(arr, n);
    arr[0] = sum;

    printArray(arr, n + 1);
    return 0;
}
