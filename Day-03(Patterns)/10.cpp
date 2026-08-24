#include<iostream>
using namespace std;

int main(){
    int n = 6;

    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j >= 0 ; j--){         // i se 0 tak reverse loop
            cout << (char)('A' + j);           // direct char print karo
        }
        cout << endl;
    }

    return 0; 
}
