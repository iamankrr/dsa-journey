
//reverse algorithm

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    vector<int>vec = {1,2,3,10,20,30};

    reverse(vec.begin(),vec.end());

    for(auto value : vec){
        cout << value << " " ;
    }
    cout << endl;
   return 0;
}
*/

//reverse between the range and all are same;

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    vector<int> vec = {1,2,4,5,65,32,6};

    reverse(vec.begin()+1,vec.begin()+4);

    for(int value : vec){
        cout << value << " ";
    }
    cout << endl;
   return 0;
}
*/

//swap , min ,max

/*

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    //max 
   cout << "maximum : " << max(32,16) << endl;

   //min
   cout << "minimum : " << min (32,16) << endl;

   // swap : The return type of swap() is void.

   int a = 3, b = 2;
   
   swap(a,b);

   cout << " a = " << a << " " << " b = " << b << endl; 
   return 0;
}
*/

// find max and min element

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int>vec = {1,12,34,11,-40,100,54,18,2,17};

   cout << " maximum : " << *(max_element(vec.begin(),vec.end())) << endl; 

   cout << " minimum : " << *(min_element(vec.begin(),vec.end())) << endl; 
   
   
   return 0;
}
*/

//binary search

#include<iostream>
using namespace std;

int main(){

   vector<int> vec = {-40,1,3,11,12,17,18,34,54,100};

   cout <<  binary_search(vec.begin(),vec.end(),18) << endl;

   return 0;
}