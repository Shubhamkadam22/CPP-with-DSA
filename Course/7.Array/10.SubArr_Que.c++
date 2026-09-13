//In this quetion we are going to find subarray of array.
// What is subarray : Subarray means contineous collection of array 
//  int arr[] = {1, 2, 3, 4, 5}
// Subarray of array 
// 1 , 12 , 123, 1234, 12345, 
// 2, 23, 234, 2345
// 3, 34, 345
// 4, 45
// 5 

//To solve this we will apply same concepts of loops patterns printing which we practice previously. 
// To prints subarray we will take starting (start) and ending(end) point index of array. 
// Index number act as a outer loop and which is also a starting points and the ending (end) act as a inner loop in for loop.  

//Time complexity will O(n^3)


#include <iostream> 
using namespace std; 


void printSubarray( int *arr , int n ){
      for (int start=0; start < n ; start++) {  //outer loop to traverse index , for com it run n times
          for(int end=start; end<n; end++){     // inner loop for ends , run n times
              //cout<< "(" << start << "," << end << ")/n" ; 
                for(int i=start ; i<=end; i++){  // to print elements of array  , it will also run n times 
                    cout<< arr[i]; 
                }
                cout<< "," ; 
          }
          cout << endl; 

      }
}


int main () {


int arr[5] = { 1, 2, 3, 4, 5};
int n = 5;

printSubarray( arr , n ); 



    return 0 ; 



}








