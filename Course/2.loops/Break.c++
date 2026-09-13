// here we will learan how we can use a break statement in a loops 

#include <iostream> 
using namespace std;


int main () {
    int i = 1;
   
    while(i <= 10) {

        if(i == 6) {
            break; // it will exit the loop when i is equal to 6
        }
        cout << i <<endl; // it will print the numbers from 1 to 10
        i++; 
    }
    cout << endl;
cout << "out of the loop" << endl; // it will print "out of the loop" after the loop is exited

return 0; 
}