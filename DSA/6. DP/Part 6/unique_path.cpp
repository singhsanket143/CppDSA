#include <iostream>
#include <vector>


std::vector<std::vector<int> > dp;
int f(int i, int j, int m, int n) {
    if(i == m-1 and j == n-1) {
        return 1; // found one possible way
    }
    if(i >= m or j >= n) {
        return 0; // out of grid
    }
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = f(i+1, j, m, n) + f(i, j+1, m, n);
}
int uniquePaths(int m, int n) {
    dp.clear();
    dp.resize(105, std::vector<int> (105, -1));
    return f(0, 0, m, n);
}

int main(int argc, char const *argv[])
{
    std::cout<<uniquePaths(7, 3);
    return 0;
}
