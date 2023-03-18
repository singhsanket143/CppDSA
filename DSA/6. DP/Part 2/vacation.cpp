#include <iostream>
#include <vector>

#define ll long long int

ll f(int n, std::vector<std::vector<int> > &arr) {
    std::vector<std::vector<ll> > dp(n, std::vector<ll> (3, 0));
    // base case -> last row
    dp[n-1][0] = arr[n-1][0];
    dp[n-1][1] = arr[n-1][1];
    dp[n-1][2] = arr[n-1][2];

    for(int i = n-2; i >= 0; i--) {
        dp[i][0] = arr[i][0] + std::max(dp[i+1][1], dp[i+1][2]);
        dp[i][1] = arr[i][1] + std::max(dp[i+1][0], dp[i+1][2]);
        dp[i][2] = arr[i][2] + std::max(dp[i+1][0], dp[i+1][1]);
    }

    return std::max({dp[0][0], dp[0][1], dp[0][2]});
}

int main() {
    int n;
    std::cin>>n;
    std::vector<std::vector<int> > arr (n, std::vector<int> (3, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            std::cin>>arr[i][j];
        }
    }
    std::cout<<f(n, arr);
    return 0;
}