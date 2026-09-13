// To find a max value form arrray we will take one variable name called "int max" and store value of index "0". 
// now in int max variable there is value 5 so then we wil;; traverse all array index usinf for loop and if next
// value greter than current value. then in "int max" value will update until and unless we dont get max value from arrray. 


#include <iostream>
using namespace std; 

int main() {

    int arr[] = {5, 4, 3, 9, 12}; 
    int n = sizeof(arr) / sizeof(int); 

    int max = arr[0];

    for(int i=0; i<n; i++){
      if(arr[i] > max) {
        max = arr[i]; 
        cout<< "assingning val" <<  arr[i]  << "to max\n"; 
      }
    }

cout << "largest= " << max << endl; 


return 0 ; 

}
