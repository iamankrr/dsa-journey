//for eachLoops    
#include<iostream>
#include<vector>

using namespace std;
 
int main(){
   
    int arr[] = {10,20,30,50};

    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
   return 0; 
}

   
// #include<iostream>
// #include<vector>

// using namespace std;
 
// int main(){
//     vector <char> vec = {'a','b','c','d','e'};

//         for(char x : vec){
//             cout << x << " " ;
//         }
//         cout << endl;

//     return 0; 
// }