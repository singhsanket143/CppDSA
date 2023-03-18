#include <iostream>
#include <vector>
// https://leetcode.com/problems/house-robber-ii/
class Solution {
public:
    
    std::vector<int> dp;
    
    int f(int i, int li, std::vector<int> &nums) {
        if(i > li) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = std::max(nums[i] + f(i+2, li, nums), f(i+1, li, nums));
    }
    int rob(std::vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        dp.clear();
        dp.resize(1000, -1);
        int case1 = f(0, n-2, nums);
        dp.clear();
        dp.resize(1000, -1);
        int case2 = f(1, n-1, nums);
        return std::max(case1, case2);
    }
};