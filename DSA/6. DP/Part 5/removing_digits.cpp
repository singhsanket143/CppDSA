#include <iostream>
#include <vector>
#include <climits>
#define ll long long int

std::vector<int> getDigits(int n) {
    std::vector<int> res;
    while(n > 0) {
        int rem = n % 10;
        if(rem != 0)
            res.push_back(rem);
        n /= 10;
    }
    return res;
}

std::vector<ll> dp;
ll f(int n) {
    if(n <= 9) return 1;
    if(dp[n] != -1) return dp[n];
    std::vector<int> digits = getDigits(n);
    ll ans = INT_MAX;
    for(int i = 0; i < digits.size(); i++) {
        ans = std::min(ans, f(n - digits[i]));
    }
    return dp[n] = 1 + ans;
}

int f_bu(int n) {
    dp.clear();
    dp.resize(1000005, INT_MAX);
    for(int i = 1; i <= 9; i++) dp[i] = 1;
    for(int i = 10; i <= n; i++) {
        std::vector<int> digits = getDigits(i);
        for(int j = 0; j < digits.size(); j++) {
            dp[i] = std::min(dp[i], 1 + dp[i - digits[j]]);
        }
    }
    return dp[n];
}

int main() {

    int n;
    std::cin>>n;
    // dp.clear();
    // dp.resize(1000005, -1);
    std::cout<<f_bu(n);

    return 0;
}