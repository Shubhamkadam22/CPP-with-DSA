#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Points to arr[0]

    // 1. Basic Pointer Dereferencing & Initial Address
    cout << "Initial Value: " << *ptr << " at Address: " << ptr << endl;

    // 2. Increment (ptr++)
    ptr++;
    cout << "After ptr++ -> Value: " << *ptr << " at Address: " << ptr << endl;

    // 3. Adding an Integer (ptr + n)
    int* ptr3 = ptr + 2; // Moves forward by 2 elements (2 * 4 bytes = 8 bytes)
    cout << "After ptr + 2 -> Value: " << *ptr3 << " at Address: " << ptr3 << endl;

    // 4. Decrement (ptr--)
    ptr3--;
    cout << "After ptr3-- -> Value: " << *ptr3 << " at Address: " << ptr3 << endl;

    // 5. Difference between two pointers
    int* startPtr = &arr[0];
    int* endPtr = &arr[4];
    ptrdiff_t elementCount = endPtr - startPtr; // Number of elements between them
    cout << "Elements between endPtr and startPtr: " << elementCount << endl;

    // 6. Traversing an Array using Pointer Arithmetic
    cout << "Array traversal using pointer arithmetic: ";
    int* p = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    // 7. Demonstrating i[arr] equivalence
    cout << "3rd element using 2[arr]: " << 2[arr] << endl;

    return 0;
}