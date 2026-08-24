#include<iostream>
#include<vector>

using namespace std;

vector<int> mjElement(vector<int>nums){
    int n = nums.size();

    for(int val : nums){
        int freq = 0;
        for(int ele : nums){
            if(ele == val){
                freq++;
            }
        }
        if(freq > nums/2){
            return 
        }
    }
}
int main(){
    
    vector<int> nums = {2,2,1,1,1};
    
   return 0;
}