#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;   // 0 aur 1 prime nahi hote
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){        // agar divisor mil gaya
            return false;
        }
    }
    return true;   // agar koi divisor nahi mila to prime hai
}

int main(){
    int n = 11;
    if(isPrime(n)){
        cout << n << " is Prime" << endl;
    } else {
        cout << n << " is Non-Prime" << endl;
    }
    return 0;  
}
