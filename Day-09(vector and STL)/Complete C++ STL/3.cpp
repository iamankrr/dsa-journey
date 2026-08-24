/*
// list
#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    
    l.push_front(40);
    l.push_front(50);
    l.push_front(60);

    l.pop_back();
    l.pop_front();

    for(int value : l){
        cout << value << " ";
    }
    cout << endl;
    
   return 0;
}
*/

/*
#include<iostream>
#include<list>

using namespace std;

int main(){
    
    list<int> l = {10,20,30,40};
    
    for(int value : l){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

// dequeue 
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
   
    deque<int>d = {1,2,3,4,5,6};

    for(int value : d){
        cout << value << " ";
    }
    cout << endl;

    cout << d[2] << endl;
   return 0;
}