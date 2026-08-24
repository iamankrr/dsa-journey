//find character lowercase or Uppercase
   
#include<iostream>
using namespace std;
 
int main(){
    char ch;

    cout <<"enter character : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "lower case ";
    }
    else{
        cout << "Uper case " <<endl;
    }
   
   return 0; 
}