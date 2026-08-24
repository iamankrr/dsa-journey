#include<iostream>
using namespace std;

int main(){
    int n = 5;
    char ch = 'A';

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (i+1); j++){   
            cout << ch;
        }
        cout << endl;
        ch++;   // next row ke liye next character
    }

    return 0; 
}
