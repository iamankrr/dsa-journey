#include<iostream>
using namespace std;

int main(){

    int nums[] = {5,15,-22,1,-25,44};
    int size = 6;

    int smallest = INT_MAX;
    int minIndex = -1;   // index store karne ke liye

    for (int i = 0; i < size; i++){
        if(nums[i] < smallest){   
            smallest = nums[i];
            minIndex = i;         // uska index save kar lo
        }
    }

    cout << "Smallest value = " << smallest << endl;
    cout << "Index of smallest = " << minIndex << endl;

    return 0;
}
