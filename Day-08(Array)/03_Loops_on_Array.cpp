//input loops on array
   
#include<iostream>
using namespace std;
 
int main(){
    
    int size = 5;
    int marks[5];

    for (int i = 0; i < size; i++){
        cout << " enter marks : ";
        cin >> marks[i]; 
    }

    for (int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }
    
   
   return 0; 
}