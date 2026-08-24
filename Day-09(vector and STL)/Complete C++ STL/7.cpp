//map

/*
#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera",120});
    m.emplace("belt",20);

    //erase 
    m.erase("tv");

    for(auto p : m){ // p because value is in the pair 
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    cout << "count : " << m.count("laptop") << endl;

    cout << "Number of laptop : " << m["laptop"] << endl;

    if(m.find("smartphone") != m.end()){
        cout << "found! \n";
    }else{
        cout << "not found! \n";
    }

    cout << m.size();
   return 0;
}
*/

// Multi-map

/*
#include<iostream>
#include<map>
using namespace std;

int main(){
   multimap<string,int>m;

   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
  
   m.erase(m.find("tv"));
   

   for(auto p : m){
    cout << p.first << " " << p.second << endl;
   }
   return 0;
}
*/

//unordered map

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
   unordered_map<string,int>um;

   um.emplace("tv",100);
   um.emplace("laptop",100);
   um.emplace("fridge",100);
   um.emplace("watch",100);

   for(auto p : um){
    cout << p.first << " " << p.second << endl;
   }
   return 0;
}