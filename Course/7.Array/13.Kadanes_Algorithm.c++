//
#include <iostream> 
using namespace std; 
#include <climits>

void maxSubarraySum2(int *arr , int n ) {
    int curSum = 0 ; 
    int maxSum = INT_MIN; 
    for(int i=0; i<n; i++){
        curSum += arr[i];
        maxSum = max(curSum , maxSum );
        if( curSum <0 ){
            curSum = 0;
        }
    }
cout << "maximum subarray sum = " << maxSum << endl ; 
}

int main() {
int arr[6] = { 2, -3, 6,-5, 4, 2};
int n = sizeof(arr) /sizeof(int); 
maxSubarraySum2(arr , n ); 
return 0 ;
}
