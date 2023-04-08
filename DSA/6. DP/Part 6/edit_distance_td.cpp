#include <iostream>
#include <vector>

std::vector<std::vector<int> > dp;

    int f_bu(std::string &s1, std::string &s2, int m, int n) {
        dp.clear();
        dp.resize(505, std::vector<int> (505, -1));
        
        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                if(i == 0) dp[i][j] = j;
                else if(j == 0) dp[i][j] = i;
                else if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1];
                else {
                    dp[i][j] = 1 + std::min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
                }
            }
        }
        return dp[m][n];
    }
    
    int f(std::string &s1, std::string &s2, int i, int j) {
        // base case
        if(i == 0) {
            return j;
        }
        if(j == 0) {
            return i;
        }
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s1[i] == s2[j]) {
            return dp[i][j] = f(s1, s2, i-1, j-1);
        } else {
            return dp[i][j] = 1 + std::min({f(s1, s2, i-1, j-1), f(s1, s2, i-1, j), f(s1, s2, i, j-1)});
        }
    }
    
    int minDistance(std::string word1, std::string word2) {
        int m = word1.size();
        int n = word2.size();
        dp.clear();
        dp.resize(505, std::vector<int> (505, -1));
        std::string s1 = " ";
        std::string s2 = " ";
        s1 += word1;
        s2 += word2;
        return f(s1, s2, m, n);
    }

int main() {

    return 0;
}