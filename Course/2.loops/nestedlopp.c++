// This program demonstrates the use of nested loops in C++.
//nested loops are loops thast are placed inside another loop. the inner loop is executed one time for each iteration of the outer loop.

#include <iostream>
using namespace std;

int main() {
  
    for (int i = 1; i <= 3; i++) { // Outer loop
        cout << "Outer loop iteration: " << i << endl;
        
        for (int j = 1; j <= 2; j++) { // Inner loop
            cout << "  Inner loop iteration: " << j << endl;
        }
    }


    return 0; 

}