#include <iostream> 
using namespace std; 

int LinearArr( int *arr, int n , int key ){
   for(int i=0; i<n; i++ ) {
     if (arr[i] == key ){
       return i;
      };
   } ;
   return -1; 
}


int main() {

   int arr[] = { 1 , 2 , 5, 71, 23, 10}; 
   int n = sizeof(arr) / sizeof(int); 
   cout<< LinearArr( arr , n , 10 );
   return 0; 


}