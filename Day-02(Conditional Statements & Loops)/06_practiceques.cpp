//Sum of all odd number from 1 to n;

#include<iostream>
using namespace std;
 
int main(){
   
    int n = 5;
    int OddSum = 0;

    for(int i = 0 ; i <=n ; i++){
        if(i%2 != 0){
            OddSum = OddSum + i;
        }
    } 
    cout << OddSum << endl;
   return 0; 
}