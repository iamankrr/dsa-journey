//Pass by reference using pointers

#include<iostream>
#include<vector>

using namespace std;

void changeA(int *ptr){ //Pass by reference using pointers 
    *ptr = 20;
}

int main(){
   int a = 10;

   changeA(&a);

   cout << "inside the main function : " << a << endl;
   return 0;
}