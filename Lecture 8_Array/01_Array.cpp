//Array 

#include<iostream>
using namespace std;
 
int main(){
    
    int marks[5] = {90,76,87,36,88};
    
    cout << marks[0] << endl;
    cout << marks[3] << endl;

    //to find size of an array 

    cout << "size of an array : " << sizeof(marks) / sizeof(int) << endl;
   
   return 0; 
}