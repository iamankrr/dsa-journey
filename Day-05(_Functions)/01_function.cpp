   
#include<iostream>
using namespace std;

int sum(int a , int b){
    int sum = a+b;
    return sum; 
       
}
//minimum of two
int min(int a,int b){
    if(a> b ){
        return a;
    }
    else{
        return b;
    }
}
int main(){
   
   cout << sum(10,5) << endl;
   
   cout << min(12,34) <<endl;
   return 0; 
}