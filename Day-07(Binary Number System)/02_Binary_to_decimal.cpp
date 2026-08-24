#include<iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int binarynum){
    int ans = 0;
    int pow = 1;  
    while(binarynum > 0){
        int lastDigit = binarynum % 10;   // extract last digit
        binarynum = binarynum / 10;       // remove last digit

        ans = ans + (lastDigit * pow);    // add contribution
        pow = pow * 2;                    // move to next power of 2
    }
    return ans;
}

int main(){
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal: " << binaryToDecimal(binary) << endl;

    return 0; 
}
