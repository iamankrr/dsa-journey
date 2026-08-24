//Non-sequencial container 
// pair 

/*
#include<iostream>
using namespace std;

int main(){
   
    pair<string ,int> p = {"aman",2};

    cout << p.first << endl;
    cout << p.second << endl;
   return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
   pair<int, pair<char,int>> p = {10,{'a',30}};

   cout << p.first <<" " << p.second.second << " " << p.second.first << endl;
   return 0;
}
*/

/**/

#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<pair<int,int>> vec = {{1,2},{3,4},{5,6},{7,8}};

   vec.push_back({9,10}); // only insert
   vec.emplace_back(11,12); //in-place object create

    for(auto p : vec){
        cout << p.first << " " <<p.second << " " << endl;
    }
   return 0;
}