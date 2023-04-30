#include <iostream>
#include <vector>
#define ll long long int

std::vector<int> arr;
std::vector<std::vector<ll> > dp;
ll f(int i, int j) {
    if(j - i == 0) {
        return arr[i];
    }
    if(j - i == 1) {
        // 2 length subarray
        return std::max(arr[i], arr[j]);
    }
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = std::max(arr[i] + std::min(f(i+2, j), f(i+1, j-1)), arr[j] + std::min(f(i+1, j-1), f(i, j-2)));
}

ll f_bu() {
    int n = arr.size();
    for(int len = 1; len <= n; len++) {
        for(int i = 0; i + len <= n; i++) {
            int j = i + len - 1;
            if(len == 1) {
                dp[i][j] = arr[i]; continue;
            }
            if(len == 2) {
                dp[i][j] = std::max(arr[i], arr[j]); continue;
            }
            ll x = dp[i+2][j];
            ll y = dp[i+1][j-1];
            ll z = dp[i][j-2];
            dp[i][j] = std::max(arr[i] + std::min(x, y), arr[j] + std::min(y, z));
        }
    }
    return dp[0][n-1];
}

int main() {
    // input here
    int n;
    std::cin>>n;
    arr.resize(n);
    dp.resize(5005, std::vector<ll> (5005, -1));
    for(int i = 0; i < n; i++) {
        std::cin>>arr[i];
    }
    std::cout<<f_bu()<<"\n";
    return 0;
}

// [0,1,2,3,4]
//    i,j