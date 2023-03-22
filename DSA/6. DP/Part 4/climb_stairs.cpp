#include <iostream>
#include <vector>
#define ll long long int
//https://leetcode.com/problems/climbing-stairs/
class Solution {
public:
    std::vector<ll> dp;
    ll f_bu(int n) {
        dp[0] = 1;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j<= 2; j++) {
                if(i - j < 0) break;
                dp[i] = (dp[i] + dp[i-j]);
            }
        }
        return dp[n];
    }
    int climbStairs(int n) {
        dp.clear();
        dp.resize(100, 0);
        return f_bu(n);
    }
};