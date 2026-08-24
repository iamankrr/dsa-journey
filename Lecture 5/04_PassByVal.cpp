//pass by value  
#include<iostream>
using namespace std;

int sum(int a , int b){
    a = a +10;
    b = b +10;
    return a+b;
}
int main(){
   int x = 5 , y = 10;

   cout << sum(x,y) <<endl;
   
   cout << "value of x = " << x <<endl;
   cout << "value of y = " << y <<endl;
   
   return 0; 
}