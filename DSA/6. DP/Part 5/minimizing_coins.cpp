#include <iostream>
#include <vector>
#include <climits>
#define ll long long int


std::vector<ll> d; // denominations
std::vector<ll> dp;
ll f(int x) {
    if(x <= 0) return 0;
    if(dp[x] != -2) return dp[x];
    ll ans = INT_MAX;
    for(int i = 0; i < d.size(); i++) {
        if(x - d[i] < 0) continue;
        ans = std::min(ans, f(x - d[i]));
    }
    if(ans == INT_MAX) {
        return dp[x] = INT_MAX;
    }
    return dp[x] = 1 + ans;
}

ll f_bu(int x) {
    dp.clear();
    dp.resize(1000005, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < d.size(); j++) {
            if(i - d[j] < 0) continue;
            dp[i] = std::min(dp[i], 1 + dp[i - d[j]]);
        }
    }
    return dp[x];
}

int main() {
    int n, x;
    std::cin>>n>>x;
    d.resize(n);
    for(int i = 0; i < n; i++) {
        std::cin>>d[i];
    }
    // dp.clear();
    // dp.resize(1000005, -2);
    int ans = f_bu(x);
    if(ans == INT_MAX) std::cout<<"-1"<<"\n";
    else std::cout<<ans;
    return 0;
}