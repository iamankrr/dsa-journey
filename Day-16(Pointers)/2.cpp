//Pointer to pointer
#include<iostream>
using namespace std;

int main(){
   int a = 10;

   int *ptr = &a;

   int **parentPointer = &ptr;

   cout << &ptr << endl;
   cout << parentPointer << endl;

   return 0;
}