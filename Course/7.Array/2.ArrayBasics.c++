#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modifyArray(int arr[]) {
    arr[0] = 99;
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "First element: " << numbers[0] << endl;
    cout << "Third element: " << numbers[2] << endl;

    numbers[1] = 25;
    cout << "Updated second element: " << numbers[1] << endl;

    int totalSize = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Array size: " << totalSize << endl;

    cout << "Array elements (standard loop): ";
    for (int i = 0; i < totalSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Array elements (range-based loop): ";
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    modifyArray(numbers);
    cout << "After function modification (index 0): " << numbers[0] << endl;

    cout << "Printed via helper function: ";
    printArray(numbers, totalSize);

    return 0;
}