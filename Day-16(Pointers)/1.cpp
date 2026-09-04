#include<iostream>
using namespace std;

int main(){
   int a = 10;

   int *ptr = &a;

   cout << ptr << endl;
   cout << &a << endl;

   cout << &ptr << endl; // it is different because it is pointer address
   return 0;
}