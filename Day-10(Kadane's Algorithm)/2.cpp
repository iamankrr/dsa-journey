//print maximum sub array sum

#include<iostream>
using namespace std;

int main(){

   int arr[] = {3,-4,5,4,-1,7,-8};
    int n = 7;

    int maxSum = INT_MIN;

   for(int st = 0 ; st < n; st++){
        int currentSum = 0;

        for(int end = st ; end < n ; end++){
            currentSum = currentSum + arr[end];
            
            maxSum = max(maxSum,currentSum);
        }
    }
    cout << maxSum << endl;
   return 0;
}