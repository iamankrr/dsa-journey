//Loops on array 

#include<iostream>
using namespace std;
 
int main(){
    
    int marks[5] = {90,76,87,36,88};
    int size = 5;

    //loops : 0 to n-1

for(int i = 0 ; i < size ;i++){
    cout << marks[i] << endl;
}
   
   return 0; 
}