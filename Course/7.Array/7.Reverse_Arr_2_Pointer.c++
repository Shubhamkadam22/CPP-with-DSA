// Reverse the following array using 2 pointer approch with O(1) space complexity and O(n) Time Complexity without extra space.  
// { 1, 5, 9, 10, 55}


#include <iostream> 
using namespace std; 

void printArr(int *arr , int n ){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << "," ; 
    
    } ; 
}; 

int main() {
   int arr[] = { 1, 5, 9, 10, 55}; 
   int n = sizeof(arr) / sizeof(int); 


   int start = 0 , end = n-1;
   
   while(start < end ) {
    //swap
   swap(arr[start], arr[end]); 
   start++;
   end--; 
   }

   printArr( arr , n ); 
   return 0;  
}