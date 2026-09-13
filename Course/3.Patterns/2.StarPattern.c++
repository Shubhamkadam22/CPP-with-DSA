/*write a program to print the following pattern

*
**
***
****

*/

#include <iostream> 
using namespace std; 

int main() {  
    int n;
    n=8; // number of rows in the pattern 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<"*"; 

        }
        cout<<endl;
    }
    return 0; 
}

