   
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   
    vector <int> vec = {1,2,4,5,6};

    cout <<  "size " <<vec.size() << endl;

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
   
   return 0; 
}