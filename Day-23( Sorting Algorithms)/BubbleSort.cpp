#include<iostream>
using namespace std;

int main(){
   
    int n = 5;
    int arr[] = {4,1,5,2,3};

    for(int i = 0; i < n ;i++){
        //yha j comparision karne ke liye n-1 time wrt i;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
   return 0;
}