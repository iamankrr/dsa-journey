//Pass by refrence :
  
#include<iostream>
using namespace std;

void changeArr(int arr[], int size){

    cout << "in function \n ";

    for(int i = 0 ; i < size ; i++){
        arr[i] = 2 * arr[i];
    }
}
int main(){
   
   int arr[]=  {1,4,5,6};
   changeArr(arr,4);

   cout << "in main after function call\n";
   for (int i = 0; i < 4; i++){
    cout << arr[i] << " ";
   }
    cout <<endl;
   return 0; 
}