//Leetcode 169 : Majority element bruteforce

#include <iostream>
#include <vector>
using namespace std;

int mjElement(vector<int> nums) {
    int n = nums.size();

    for (int val : nums) {
        int freq = 0;

        for (int ele : nums) {
            if (ele == val) {
                freq++;
            }
        }

        if (freq > n / 2) {
            return val;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1};

    cout << mjElement(nums) << endl;

    return 0;
}