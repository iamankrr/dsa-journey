//Hollow Diamond  

#include<iostream>
using namespace std;
 
int main(){
    int n = 4;
    
    //top parts 

    for(int i = 0 ; i < n ; i++){
        
        //spaces
        for(int j = 0 ; j<n-i-1; j++){
            cout << " ";    
        }
        cout <<"*";

        if(i != 0 ){
            //spaces 
            for(int j = 0 ; j<2*i-1; j++){
            cout << " ";    
        }
            cout <<"*";
        }
        cout <<endl;
    }

    for(int i = )
   return 0; 
}