// In this problem question we will print the Max subarray sum to solve this problem we have 3 standard algorithms 
 // 1. Brute Force - normal approch (not to use) TC = O(n3)
 // 2 Brute force with some optimazations (still not to use). TC = O(n2) 
 // Kadane's Algorithm O(n)

//in this code we'll learn Brute force approch to find max subarray sum.
//to find that first 


#include <iostream> 
using namespace std; 
#include <climits>

void maxSubarraySum1(int *arr , int n ) {

    int maxSum = INT_MIN; 

    for(int start = 0; start<n; start++){
        for (int end= start; end<n; end++) {
            int curSum = 0 ; 
            for (int i=start; i<=end; i++){
                curSum += arr[i]; 
            }
    // cout << curSum << ",";
         maxSum = max(maxSum, curSum); 
        }

    }
cout << "maximum subarray sum = " << maxSum << endl ; 
}






int main() {
int arr[6] = { 2, -3, 6,-5, 4, 2};
int n = sizeof(arr) /sizeof(int); 

maxSubarraySum1(arr , n ); 

return 0 ;
}
