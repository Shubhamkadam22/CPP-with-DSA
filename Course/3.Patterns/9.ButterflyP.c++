// print a following pattern 

/*

*             *
* *         * * 
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *




*/

#include <iostream>
using namespace std;

int main() {

  int n=10; 
//outer loop for row
  for(int i=1; i<=n; i++) {
      //first inner loop for star  
      for(int j=1; j<=i; j++) {
        cout<<"*";
      }

      //second inner loop for space
      for(int j=1; j<=2*(n-i); j++) {
        cout<<" ";
      }

     //second inner loop for star  
      for(int j=1; j<=i; j++) {
        cout<<"*";
      }
        cout<<endl;

  }

  //second part of the pattern

  for(int i=n; i>=1; i--) {
      //first inner loop for star  
      for(int j=1; j<=i; j++) {
        cout<<"*";
      }

      //second inner loop for space
      for(int j=1; j<=2*(n-i); j++) {
        cout<<" ";
      }

     //second inner loop for star  
      for(int j=1; j<=i; j++) {
        cout<<"*";
      }
        cout<<endl;

  }

    return 0; 

}