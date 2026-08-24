//find the smallest and largest element in an array 
 
#include<iostream>
using namespace std;

int main(){

    int nums[] = {5,15,22,1,-25,44};
    int size = 6;

    // Method 1: if-condition
    int smallest1 = INT_MAX;
    int largest1  = INT_MIN;

    for(int i = 0 ; i < size ; i++){
        if(nums[i] < smallest1){
            smallest1 = nums[i];
        }
        if(nums[i] > largest1){
            largest1 = nums[i];
        }
    }

    // Method 2: using min() and max()
    int smallest2 = INT_MAX;
    int largest2  = INT_MIN;

    for(int i = 0 ; i < size ; i++){
        smallest2 = min(nums[i], smallest2);
        largest2  = max(nums[i], largest2);
    }

    // Output
    cout << "Using if-condition:" << endl;
    cout << "  Smallest = " << smallest1 << endl;
    cout << "  Largest  = " << largest1  << endl;

    cout << "Using min() and max():" << endl;
    cout << "  Smallest = " << smallest2 << endl;
    cout << "  Largest  = " << largest2  << endl;

    return 0; 
}
