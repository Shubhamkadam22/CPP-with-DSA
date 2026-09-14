/**
In this program, we will demonstrate the use of value parameters in C++.Value parameters are used to pass arguments to functions by value, 
meaning that a copy of the argument's value is made and used within the function. This allows the original argument to remain unchanged
after the function call.n the function call.    

Consider the C++ function abc. Example:


```cpp
int abc(int a , int b , int c) {
    return a + b* c ;   // This change only affects the local copy of the parameters
}
```


This function computes the expresion a + b * c for the case a, b, c are integers. The resu;t is also an integer. 

In this example, the parameters a, b, and c are the formal parameters of the function abc. When the function is called, the values of the actual 
arguments are copied into these formal parameters. Any changes made to a, b, or c within the function do not affect the original arguments passed 
to the function.

If the function is invoked by the statement `abc(2, 3, 4)`, the values 2, 3, and 4 are copied into the parameters a, b, and c respectively. 
The function will then compute the expression
then 2, 3, and 4 are actual parameters, and the function will compute the expression 2 + 3 * 4, which equals 14. The original values of the 
arguments remain unchanged after the function call.

 */

 // Code 1.1 

#include <iostream>
using namespace std;


int abc(int a, int b, int c) {
    return a + b * c; // This change only affects the local copy of the parameters
}

int main() {
    int result = abc(2, 3, 4);
    cout << "Result: " << result << endl;
    return 0;
}