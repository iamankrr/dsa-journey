#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;

    // find min and max index
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[minIndex]){
           minIndex = i; 
        } 
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }

    // swap
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // print result
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    int size = 5;

    swapMinMax(arr, size);

    return 0;
}
