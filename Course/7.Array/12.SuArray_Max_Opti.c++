
#include <iostream> 
using namespace std; 
#include <climits>

void maxSubarraySum2(int *arr , int n ) {

    int maxSum = INT_MIN; 

    for(int start = 0; start<n; start++){  // 2 
         int curSum = 0 ; 
        for (int end= start; end<n; end++) { // 2, -3, 6, -5, 
           curSum += arr[end];
         maxSum = max(maxSum, curSum); 
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
