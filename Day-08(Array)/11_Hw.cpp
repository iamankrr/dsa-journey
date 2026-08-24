//WAF to calculate Sum and product of all number of an array 

#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + arr[i];    
    }
    return sum;   
}
int productArray(int arr[],int size){
    int product = 1;

    for(int i = 0 ; i < size ; i++){
        product = product * arr[i];
    }
    return product;
}
int main(){
   
    int arr[] = {1,2,4,5,3};
    int size = 5;

    int result = sumArray(arr,size); // function call
    cout << "sum : " << result << endl;

    int result_ = productArray(arr,size);
    cout <<"product : " << result_ << endl;

   return 0; 
}