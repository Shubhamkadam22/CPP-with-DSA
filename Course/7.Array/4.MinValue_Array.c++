// To find a min value form array we will take one variable name called "int min" and store value of index "0". 
// now in int min variable there is value 5 so then we wil;; traverse all array index usinf for loop and if next
// value less than current value. then in "int min" value will update until and unless we don't get min value from arrray. 


#include <iostream>
using namespace std; 

int main() {

    int arr[] = {5, 4, 3, 9, 12}; 
    int n = sizeof(arr) / sizeof(int); 

    int min = arr[0];

    for(int i=0; i<n; i++){
      if(arr[i] < min) {
        min = arr[i]; 
        cout<< "assingning val" <<  arr[i]  << "to min\n"; 
      }
    }

cout << "Smallest Value= " << min<< endl; 

return 0 ; 

}
