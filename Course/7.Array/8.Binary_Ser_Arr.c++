#include <iostream>
using namespace std; 

int binSearch(int *arr, int n, int key) {

    int st = 0, end = n - 1; 

    while (st <= end) {
        int mid = st + (end - st) / 2; 
        
        if (arr[mid] == key) {
            return mid; // Found, return index
        } else if (arr[mid] < key) {
            st = mid + 1; // Search right half
        } else {
            end = mid - 1; // Search left half
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Index of key: " << binSearch(arr, n, 12) << endl;
    return 0; 
}