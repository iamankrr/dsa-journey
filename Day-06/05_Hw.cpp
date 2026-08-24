// WAF to reverse an integer

   
#include<iostream>
using namespace std;

int reverseNum(int num){
    int ans = 0;
    while(num > 0){

        int remainder = num % 10;
        ans = ans * 10 + remainder;
        num = num / 10;
    }
    return ans;
}
int main(){
   
   int num;
   cout << "enter num : " ;
   cin >> num;
   cout<< "Original num = " << num << endl;

   cout << "Reverse number = " << reverseNum(num) << endl;
   return 0; 
}