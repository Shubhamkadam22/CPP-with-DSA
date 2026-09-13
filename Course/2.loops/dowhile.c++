//do while loop in c++ 
// do while loop is similar to while loop but the difference is that in do while loop the code block will be executed at least once even if the condition is false because the condition is checked after the code block is executed.
// do define - what to do 
#include <iostream> 
using namespace std;

int main() {
 int i = 1;

 do {
    cout << i << " "; // it will print the numbers from 1 to 5
    i++;
 } while (i <= 5);


cout << endl;
return 0;
}