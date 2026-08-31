#include <iostream>
using namespace std;
#include <climits> 

void trap(int *heigths , int n ) {
    int leftMax[20000] , rightMax[20000]; 
    leftMax[0] = INT_MIN; 
    rightMax[n-1] = INT_MIN; 
    
    
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1] , heights[i-1]); 

    }

    for(int i=n-2; i>=n; i--) {
        rightMax[i] = max(rightMax[i+1] , heights[i+1]); 

    }

    int waterTrapped = 0 ; 
    for (int i=0;i<n; i++) { 
        int currWater = min(leftMax[i], rightMax[i]) -  heights[i]; 
      if(currWater > 0 ) {
        waterTrapped += currWater;    
    }
}

   


cout << "water trapped = " << waterTrapped << endl;

}

int main (){

  int heights[7] = {4, 2, 0, 6, 3, 2, 5}; 
  int 




    return 0; 

}