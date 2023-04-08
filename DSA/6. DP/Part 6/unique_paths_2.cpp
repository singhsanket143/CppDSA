#include <iostream>
#include<vector>
#define ll long long int
int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
        std::vector<std::vector<ll> > dp (105, std::vector<ll> (105, 0));
        // base case
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1] == 1) return 0; // special corner case
        dp[m-1][n-1] = 1;
        // column
        for(int i = m-2; i >= 0; i--) {
            if(obstacleGrid[i][n-1] == 1) continue;
            dp[i][n-1] = dp[i+1][n-1];
        }
        
        // row
        for(int j = n-2; j >= 0; j--) {
            if(obstacleGrid[m-1][j] == 1) continue;
            dp[m-1][j] = dp[m-1][j+1];
        }
        
        for(int i = m-2; i>= 0; i--) {
            for(int j = n-2; j>= 0; j--) {
                if(obstacleGrid[i][j] == 1) continue;
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
    }
int main() {

    return 0;
}