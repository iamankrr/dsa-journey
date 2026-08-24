//TypeCasting

#include<iostream>
using namespace std;
 
int main(){
   

    //implicit 
    char grade = 'A';

    int value = grade;

    cout << value <<endl; //here print of ASCII value of A

    float pi = 3.14;
    int x = (int)pi;

    cout << x <<endl; // here print  pi value in integer. (Decimal ignore)

    //Arithmetic operator

    cout << (5 / double(2)) <<endl;

   return 0; 
}