#include <iostream>
#include <vector>
#define ll long long int
// https://atcoder.jp/contests/dp/tasks/dp_b
std::vector<ll> dp;
ll f_bu(int n, std::vector<int> &h, int k) {
    dp.clear();
    dp.resize(100005, INT_MAX);
    dp[1] = 0;
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i - j < 0) break;
            dp[i] = std::min(dp[i], dp[i-j] + std::abs(h[i-j] - h[i]));
        }
    }
    return dp[n];
}

int main() {

    int n, k;
    std::cin>>n>>k;
    std::vector<int> h(n+1);
    // dp.clear();
    // dp.resize(100005, -1);
    for(int i = 1; i <= n; i++) {
        std::cin>>h[i];
    }

    std::cout<<f_bu(n, h, k)<<"\n";

    return 0;
}