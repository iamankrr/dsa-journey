/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int>vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.pop_back(); // delete last element

    for(int value : vec ){
        cout << value << " ";
    }
    cout << endl;

    cout << vec[2] << endl; // print using index value

    cout << "front : " << vec.front() << endl;

cout << "back : " <<vec.back() << endl;
   return 0;
}
*/


/*
#include<iostream>
#include<vector>

using namespace std;

int main(){

 //   vector<int> vec{1,2,3,4,5,6};
    
    vector<int>vec(3,10);

    for(int value : vec){
        cout << value << " ";
    }
    cout << endl;
    
   return 0;
}
*/


/*
#include<iostream>
#include<vector>

using namespace std;

int main(){

 //   vector<int> vec{1,2,3,4,5,6};
    
    vector<int>vec1(3,10);

    vector<int>vec2(vec1);

    for(int value : vec2){
        cout << value << " ";
    }
    cout << endl;
    
   return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec = {1,2,3,4,5,6};

    vec.erase(vec.begin());
    vec.erase(vec.begin()+2);

    for(int value : vec){
        cout << value << " ";
    }
        cout << endl;
   return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec = {1,2,3,4,5,6};

    vec.insert(vec.begin()+2,100);

    for(int value : vec){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int>vec = {1,2,3,4,5,6};

    vec.clear();

    for(int value : vec){
        cout << value << "  ";
    }
    cout << endl;

    cout << " size : " << vec.size() << endl;
    cout << " capacity : " << vec.capacity() << endl;
   return 0;
}