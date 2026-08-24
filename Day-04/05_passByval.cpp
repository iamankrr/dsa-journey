//pass by value   
#include<iostream>
using namespace std;
 
void changeX(int x){
    x = 2 * x;
    cout << "x = " << x <<endl;
}
int main(){
    
    int x = 10;

    changeX(x);
    
    cout << "now_value of x = " << x << endl;
   
   
   return 0; 
}