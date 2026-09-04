//pointer Arithmetic

#include<iostream>
using namespace std;

int main(){
   int a = 10;

   int *ptr = &a;

   cout << ptr << endl;
   ptr++;
   cout << ptr << endl; // +4 bytes (hexadecimal)

   // add 
   cout << ptr << endl;
   ptr = ptr + 2; //2 int => 8 byte
   cout << ptr << endl; // +8

   //subtract
    cout << ptr << endl;
    ptr = ptr - 2; //2 int => -8 byte
    cout << ptr << endl; // -8
    return 0;
}