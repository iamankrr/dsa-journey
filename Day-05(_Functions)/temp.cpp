// Binary to decimal 
 
#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int ans = 0 ,pow = 1;

    while(binaryNum > 0 ){
        int remainder = binaryNum % 10;
        binaryNum = binaryNum / 10;
        
        ans = ans + (remainder * pow);
        pow = pow * 2;
    }
    return ans;
}
int main(){
   
   cout << binaryToDecimal(1011) << endl;       
   return 0; 
}