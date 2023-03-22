#include <iostream>
#include <vector>
#define ll long long int
std::vector<ll> dp;
// https://cses.fi/problemset/task/1633/
int MOD = 1000000007;
ll f(int n) {
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    ll ans = 0;
    for(int j = 1; j <= 6; j++) {
        if(n - j < 0) break;
        ans = (ans%MOD + f(n - j)%MOD)%MOD;
    }
    return dp[n] = ans;
}

ll f_bu(int n) {
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j<= 6; j++) {
            if(i - j < 0) break;
            dp[i] = (dp[i]%MOD + dp[i-j]%MOD)%MOD;
        }
    }
    return dp[n];
}

int main() {

    int n;
    std::cin>>n;
    dp.clear();
    dp.resize(1000005, 0);
    std::cout<<f_bu(n);
    return 0;
}