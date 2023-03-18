#include <iostream>
#include <vector>
// https://leetcode.com/problems/house-robber/

class Solution {
public:
    
    std::vector<int> dp;
    
    int f(int i, std::vector<int> &nums) {
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = std::max(nums[i] + f(i+2, nums), f(i+1, nums));
    }

    int f_bu(std::vector<int> &nums) {
        dp.clear();
        dp.resize(1000, -1);
        int n = nums.size();
        if(n == 1) return nums[n-1];
        dp[n-1] = nums[n-1];
        dp[n-2] = std::max(nums[n-1], nums[n-2]);
        for(int i = n-3; i >= 0; i--) {
            dp[i] = std::max(dp[i+1], nums[i] + dp[i+2]);
        }
        
        return dp[0];
    }
    
    int rob(std::vector<int>& nums) {
        dp.clear();
        dp.resize(1000, -1);
        return f(0, nums);
    }
};

