#include <iostream>
#include <vector>
#define ll long long int
// https://atcoder.jp/contests/dp/tasks/dp_a
std::vector<ll> dp;

ll f(int n, std::vector<int> &h) {
    // Time: O(n)
    // Space: O(n)
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return std::abs(h[1] - h[2]);
    }
    if(dp[n] != -1) return dp[n];
    return dp[n] = std::min(f(n-1, h) + std::abs(h[n-1] - h[n]), f(n-2, h) + std::abs(h[n-2] - h[n]));
}

ll f_bu(int n, std::vector<int> &h) {
    dp.clear();
    dp.resize(100005, -1);
    dp[1] = 0;
    dp[2] = std::abs(h[1] - h[2]);
    for(int i = 3; i <= n; i++) {
        dp[i] = std::min(dp[i-1] + std::abs(h[i-1] - h[i]),dp[i-2] + std::abs(h[i-2] - h[i]));
    }
    return dp[n];
}


int main() {

    int n;
    std::cin>>n;
    std::vector<int> h(n+1);
    // dp.clear();
    // dp.resize(100005, -1);
    for(int i = 1; i <= n; i++) {
        std::cin>>h[i];
    }

    std::cout<<f_bu(n, h)<<"\n";
    return 0;
}