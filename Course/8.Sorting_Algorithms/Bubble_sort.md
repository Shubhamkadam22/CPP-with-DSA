# 🧼 Bubble Sort Quick Notes

## 💡 Concept
Repeatedly compares adjacent elements and swaps them if they are in the wrong order. The largest unsorted element "bubbles up" to the end in each pass.

---

## ⏱️ Complexity
* **Time:** $O(N^2)$ Worst/Average | $O(N)$ Best (Optimized)
* **Space:** $O(1)$ (In-place)

---

## 🛠️ C++ Code (Function Style)

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool isSwapped = false; // Optimization flag
        
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        
        if (!isSwapped) break; // Exit early if already sorted
    }
}