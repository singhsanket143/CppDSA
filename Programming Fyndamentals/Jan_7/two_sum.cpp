#include <vector>
#include <iostream>
using namespace std;
class Solution {
public: // https://leetcode.com/problems/two-sum/description/
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            // this loop of i fixes all the elements as the first one by one
            for(int j = i + 1; j < nums.size(); j++) {
                cout<<nums[i]<<" "<<nums[j]<<"\n";
                if(nums[i] + nums[j] == target) {
                    vector<int> result {i, j};
                    return result;
                }
            }
        }
        vector<int> res;
        return res;
    }
};

/**
    1. In 1sec -> 10^8 instructions approx

    2. max length of the array is 10^4 (n)

    3. How many distinct pairs we can get ? 
        nC2 -> (n(n-1)) / 2 approx n^2
        if n is max 10^4 then it can get n^2 pairs i.e. 10^8
        if we just somehow generate all the possible pairs 
        and then check if the sum is equal to target or not ? 


    4. [3,2,4] , 6
        (3,2) -> 5
        (2,4) -> 6
        (3,4) -> 7
    [a1,a2,a3,a4,a5....]
*/
