//vector functions

#include<iostream>
#include<vector>
using namespace std;
 
int main(){

    vector<int> vec;

    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(65);

    cout << "After pushBack function : "<< vec.size() << endl;

    vec.pop_back(); // delete last value 65
    
    //front : print first element
    cout << vec.front() <<endl; //25

    //front : print last element
    cout << vec.back() <<endl; //45 not 65 becuse it is deleted.

    //at : access the element at index
    cout << vec.at(1) << endl; //45
   return 0; 
}