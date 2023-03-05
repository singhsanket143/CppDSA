#include <iostream>
using namespace std;

// n <= 10^3
int dp[1005];

int f(int n) { // top down
    /**
     * Time: O(n)
     * Space: O(n)
    */
    if(n == 0 or n == 1) {
        return dp[n] = n;
    }
    // if the subproblem is already computed, don't recompute
    if(dp[n] != -1) {
        return dp[n];
    }
    return dp[n] = f(n-1) + f(n-2); // first time computing f(n)
}

int f_bu(int n) { // bottom up
    /**
     * Time: O(n)
     * Space: O(n)
    */
    // local dp array
    int dp[1005];
    // base cases
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2]; // f(n-1) + f(n-2)
    }
    return dp[n]; // nth fib
}

int f_so(int n) {
    /**
     * Time: O(n)
     * Space: O(1)
    */
    if(n == 0 or n== 1) return n;
    int a = 0;
    int b = 1;
    int c;
    int count = 1;
    while(count < n) {
        c = a + b;
        a = b;
        b = c;
        count++;
    }
    return c;
}

int main() {
    // we are initialising the dp array with -1, to denote that no suproblem has been computed yet
    // for(int i = 0; i < 1005; i++) {
    //     dp[i] = -1;
    // }
    // std::cout<<f(10)<<"\n";
    // std::cout<<"Content of dp array\n";
    // for(int i = 0; i < 100; i++) {
    //     std::cout<<dp[i]<<" ";
    // }

    // std::cout<<f_bu(10)<<"\n";
    std::cout<<f_so(10)<<"\n";
    return 0;
}