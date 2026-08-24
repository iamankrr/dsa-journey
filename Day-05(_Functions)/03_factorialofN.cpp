//factorial of n using function 

#include<iostream>
using namespace std;

int factorialofN(int n){
    int factorial = 1;
    for(int i = 1; i <= n ; i++){
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
   
   cout << factorialofN(5) << endl;
   return 0; 
}