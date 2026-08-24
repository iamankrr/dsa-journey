//check if a number is prime of not;

#include<iostream>
using namespace std;
 
int main(){
    
    int n = 7;
    bool isPrime = true;

    for (int  i = 2; i <= (n-1); i++)
    //for (int  i = 2; i * i <= n; i++) -> Best approach
    {
        if(n % i == 0){
            isPrime = false;
            break;           
        }
    }
    if (isPrime == true){
        cout<< "prime number" << endl;
    }
    else{
        cout << "not a prime number" << endl;
    }
    
   return 0; 
}