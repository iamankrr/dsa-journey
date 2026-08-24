#include<iostream>
using namespace std;

// function to check prime
bool isPrime(int n) {
    if (n <= 1) return false;   // 0 and 1 are not prime

    for (int i = 2; i < n; i++) {   // n-1 tak check karo
        if (n % i == 0) {
            return false;   // agar divisor mil gaya
        }
    }
    return true;   // agar divisor nahi mila to prime hai
}

// function to print prime numbers
void printPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n = 11;
    cout << "Prime numbers from 2 to " << n << " : ";
    printPrime(n);
    return 0;
}
