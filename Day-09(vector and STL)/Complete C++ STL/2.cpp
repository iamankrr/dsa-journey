/*
#include<iostream>
#include<vector>

using namespace std;

int main(){
   
    vector<int>vec = {10,20,30,40,50,60};

    cout << "vector begin : " << *(vec.begin()) << endl;

    cout << "vector end : " << *(vec.end()) << endl;
   return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int> vec = {1,2,3,4,5,6};
    //iterator
    vector<int> :: iterator it;

    for(it = vec.begin() ; it != vec.end(); it++){
        cout << *(it) << " "; 
    }
    cout << endl;
   return 0;
}
*/


#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> vec = {1,2,3,4,5,6};

    //reverse iterator

    vector<int> :: reverse_iterator it; // also you can use auto without this

    for(it = vec.rbegin(); it != vec.rend(); it++ ){
        cout << *(it) << " ";
    }    
    cout << endl;

    //auto

    /*
    for(auto it = vec.rbegin(); it != vec.rend(); it++ ){
        cout << *(it) << " ";
    }    
    cout << endl;
    */
   return 0;
}

