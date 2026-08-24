//Algorithm 

//for array 
/*
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
   
    int arr[]= {1,8,6,32,9,10};

    sort(arr,arr+6);

    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

//for vector 

/*
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
   
    vector<int> vec = {1,8,6,32,9,10};

    sort(vec.begin(),vec.end());

    for(int value : vec){
        cout << value << " ";
    }
    cout << endl;

    cout << "upper bound : " << *upper_bound(vec.begin(), vec.end(), 8) << endl;

   return 0;
}
*/

/*

#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int>vec = {1,8,6,32,9,10};

    sort(vec.begin(),vec.end(),greater<int>());

    for(int value : vec){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

// unordered set with pair

/*
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    
    sort(vec.begin(),vec.end());
    
    for(auto p : vec){      //pair value
        cout << p.first <<" " << p.second << endl;
    }
   return 0;
}
*/

// custom comparator

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    if(p1.first > p2.first) return false;
    
    else return false;
}

int main() {

    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(), vec.end(), comparator);

    for (auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

