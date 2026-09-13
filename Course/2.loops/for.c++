#include <iostream> 
using namespace std; 

//loops in cpp are used to execute a block of code repeatedly until a certain condition is met.


/*for loop syntax:
for(initialization; condition; increment/decrement) {
    // code to be executed
}   
*/

/*
iterate means run a loop 
itratinsg means running a loop multiple times
iterator is a variable that is used to control the number of iterations in a loop.
*/

int main() {
    
 for(int  num=1; num<=5; num++) {
        cout << num << " "; // it will print the numbers from 1 to 5
    }
    cout << endl; 

 for(int i=1; i<=10; i++){
    cout << "i love cpp" << endl; // it will print "i love cpp" 10 times
 }


 // to print all the numbers from 1 to a number entered by the user
 
 int a;
 cout << "enter a number to print all nums :";
 cin >> a; 
 for (int i=a; i>=1; i--) {
    cout << i << " "; // it will print all the numbers from 1 to a
 }
cout << endl; 


// to print a sum of n number 
 

int b;
 cout << "enter a number to print all n number sum:";
 cin >> b; 

 int sum=0; 
 for (int i=1; i<=b; i++) {
    sum += i; // it will add all the numbers from 1 to a and store the result in sum
 }
 cout << "sum=" << sum << endl; // it will print the sum of all the numbers from 1 to a
    
 return 0; 
} 

