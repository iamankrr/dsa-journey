//factorial of n

#include<iostream>
using namespace std;
 
int main(){
    
    int n = 10;
    int factorial = 1;

    for(int i = 1 ; i <= 10 ; i++)
    {
        factorial = factorial * i;
    }    
    cout << factorial << endl;
       
    return 0; 
}