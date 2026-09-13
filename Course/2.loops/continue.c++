// we use a continue statement to  skip the current iteration of a loop and continue with the next iteration


#include <iostream>
using namespace std;

int main() {

    for (int i=1; i<=10; i++) {
        if(i == 5) {
            continue; // it will skip the current iteration when i is equal to 5 and continue with the next iteration
        }
        cout << i << " "; // it will print the numbers from 1 to 10 except 5
    }

    return 0;
}