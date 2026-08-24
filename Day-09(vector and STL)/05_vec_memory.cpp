//How vector grown in memory

#include<iostream>
using namespace std;
 
int main(){
    
    vector<int> vec ;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);

    cout << " size : " << vec.size() <<endl;

    cout << " capacity : " << vec.capacity() <<endl;
   
   return 0; 
}