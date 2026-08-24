// Optimized using sorting

//Leetcode 169 : Majority element bruteforce

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mjElement(vector<int> nums) {
    
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        int freq = 1;

        for(int j = i + 1; j < n; j++){
            if(nums[i] == nums[j]){
                freq++;
            }else{
                break;
            }
        }

        if(freq > n / 2){
            return nums[i];
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};

    cout << mjElement(nums) << endl;

    return 0;
}