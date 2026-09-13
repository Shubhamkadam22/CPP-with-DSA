#include <iostream> 
#include <climits> 
using namespace std; 

void maxProfit(int *prices , int n ){
   int bestBuy[100000]; 
   bestBuy[0]= INT_MAX;  
   for(int i=1 ; i<n ; i++ ){                         // to find best buy day from previous index bestBuy[i] = min(bestbuy[i-1] , prices[i-1])
   bestBuy[i] = min(bestBuy[i-1], prices[i-1]); 
   }

   int maxProfit =0 ; 
   for(int i=0 ; i<n; i++ ){
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit , currProfit);
   }
  cout << "Max Profit = " << maxProfit << endl ;  
}

//Time complexity for this solution is 
// we use two loop but they are not nested loops so O(n + n ) = O(2n) = O(n) ; we ignore constant in time complexity 


int main() {
   int prices[6] = {7, 1, 5, 3, 6, 4}; 
   int n = sizeof(prices)/ sizeof(int); 
   maxProfit(prices , n) ; 
   return 0 ; 
}