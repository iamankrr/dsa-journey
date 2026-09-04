//BinarySearch using Recursion 

#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch( vector<int>arr , int target, int st, int end){

    if(st <= end){  // --Base Case--
        int mid = st + (end-st)/2;
        
        if(target > arr[mid]){ //Search in 2nd half
            return recBinarySearch(arr,target,mid+1,end);
        }
        else if (target < arr[mid]){
            return recBinarySearch(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
   
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 12;

    cout << recBinarySearch(arr,12,0,arr.size()-1);
   return 0;
}