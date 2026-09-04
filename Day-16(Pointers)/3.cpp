//Dereference Operator :- Print Value at address.

#include<iostream>
#include<vector>
using namespace std;

int main(){
   int a = 10;
   int *ptr = &a;
   int **parentPtr = &ptr;
   
   cout << *(&a) << endl;
   cout << *(ptr) << endl;

   cout << *(parentPtr) << endl;
   cout << **(parentPtr) << endl; // actual value print
   cout << *(&ptr) << endl;

   return 0;
}