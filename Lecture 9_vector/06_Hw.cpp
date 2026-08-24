//linear seach code on a vector

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    
    vector<int> vec = {1,3,4,66,5,3,0,3,1,-12,3};
    int target = 0;
    bool found = false;

   
   //linear search 
   for (int  i = 0; i < vec.size(); i++){
        if(vec[i] == target){
            cout << "element found index : " << i << endl;
            found = true;
            break;
        }
   }
    if(!found){
        cout << "element not found " << endl;
    }
    return 0;
}