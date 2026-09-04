//array

#include<iostream>
using namespace std;

int main(){
   int arr[] = {10,20,30,40,50}; 

   cout << *arr << endl;      //10
   cout << *(arr+1) << endl;  //20  
   cout << *(arr+2) << endl;  //30
   cout << *(arr+3) << endl;  //40
   cout << *(arr+4) << endl;  //50 

   return 0;
}