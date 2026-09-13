#include <iostream> 
using namespace std;

int main() {
   int n = 12; // example number 
   int disum =0;

   while( n > 0 ){
    int lastdigit = n % 10;
    disum += lastdigit;
    n = n/10;

   }
   cout << "the sum of the digits is :" << disum << endl;

// print a sum of odd digits from a number 
  
   n = 12345; // example number 
   int oddsum = 0;

   while( n > 0 ){
    int lastdigit = n % 10;
    if( lastdigit % 2 != 0 ){
     oddsum += lastdigit;
    }
    n = n/10;
   }
   cout << "the sum of the odd digits is :" << oddsum << endl;

   return 0; 
}

