//Sum of number 1 to n Using for loop

#include<iostream>
using namespace std;
 
int main(){
    
    int n;
    int sum = 0;

    cout << "enter n : ";
    cin >> n;

    for (int i = 1; i <=  n ; i++){
        sum = sum + i;
    }
    cout << sum << endl;
   
   return 0; 
}