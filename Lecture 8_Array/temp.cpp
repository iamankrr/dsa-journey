   
#include<iostream>
using namespace std;

void swapMinMax(int arr[],int size){
    int minIndex = 0 ;
    int maxIndex = 0 ;

    //find minimum and maximum 

    for(int i  = 0 ; i < size ; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }
    //swap
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
    

int main(){
    int arr[] = {89,4,3,23,9,21,0,-34,12,-91};
    int size = 10;

    swapMinMax(arr,size);

   return 0; 
}