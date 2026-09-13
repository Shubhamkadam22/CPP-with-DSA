#include <iostream> 
using namespace std;

int main() {
    int n = 3;
    bool isprime = true;
 
    for(int i=2; i<=n-1; i++) {
    
        if(n%i ==0) {
            isprime = false;
            break; // it will print "n is not a prime number" if n is divisible by any number from 2 to n-1
        }
    

    }    
    if(isprime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
return 0;
}