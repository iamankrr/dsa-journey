//maximum subarray sum using bruteforce approach
   
#include<iostream>
using namespace std;
 
int main(){
    
    int n = 7;
    int arr[] = {3,-4,5,4,-1,7,-8};

    int maxSum = INT_MIN;
    
    for(int st = 0 ; st < n ; st++){
        int currentSum = 0 ;
        for(int end = st ; end < n ; end++){
            currentSum = currentSum + arr[end];
           if(currentSum > maxSum){
              maxSum = currentSum;
            }
            //maxSum = max(currentSum , maxSum) -> yha bhi compare hi ho rha hai other methood 
        }
    }

    cout << maxSum <<endl;
    return 0; 
}