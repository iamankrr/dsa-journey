//Unary Operator 

   
#include<iostream>
using namespace std;
 
int main(){

    // post increment 
    int a = 10;
    
    int b = a++; //kaam , update 
    cout << "b = " << b <<endl; // 10
    cout << "a = " << a <<endl; // 11

    // pre increment

    int c = ++a;

    cout << "c = " << c <<endl; // 12
    

    
   return 0; 
}