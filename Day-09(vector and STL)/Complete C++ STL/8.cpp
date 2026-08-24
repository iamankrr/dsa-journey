
//Set
/*
#include<iostream>
#include<set>

using namespace std;

int main(){
    
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    

    //duplicate value can't store
    s.insert(40);
    s.insert(50);

    cout <<"size of the set : " << s.size() << endl;

    cout << "lower bound : " << *(s.lower_bound(40)) << endl; //40

    cout << "upper bound : " << *(s.upper_bound(40)) << endl; //50

    cout << "upper bound2 : " << *(s.upper_bound(50)) << endl; //0 , because value are not available


    for(auto value : s){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

//unordered set 

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(10);
    s.insert(11);
    s.insert(15);
    s.insert(13);
    s.insert(14);

    for(auto value : s){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}