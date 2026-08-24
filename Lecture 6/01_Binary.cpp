// To convert Decimal to Binary

#include<iostream>
using namespace std;

int decToBinary(int decimalnum){
    int ans = 0;
    int pow = 1;
    while(decimalnum > 0){
        int remainder = decimalnum % 2;
        decimalnum = decimalnum / 2;

        ans = ans + (remainder * pow);
        pow = pow * 10;
    }
    return ans;
}
int main(){
   // 1 to 10

   for(int i = 1 ; i <= 10 ; i++){
        cout << decToBinary(i) << endl;
   }
   return 0; 
}