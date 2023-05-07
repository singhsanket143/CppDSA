class Solution {
public:
    int countSubarrays(std::vector<int> &arr, int x) {
        std::unordered_map<int, int> mp;
        mp[arr[0]] = 1;
        int ans = 0;
        for(int j = 1; j < arr.size(); j++) {
            if(mp[arr[j] - x]) {
                ans+=mp[arr[j] - x];
            }
            mp[arr[j]]++;
        }
        ans += mp[x];

        return ans;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // row prefix sum
        for(int i = 0; i < n; i++) {
            for(int j = 1; j < m; j++) {
                matrix[i][j] = matrix[i][j] + matrix[i][j-1];
            }
        }
        // col prefix sum
        for(int j = 0; j < m; j++) {
            for(int i = 1; i < n; i++) {
                matrix[i][j] = matrix[i][j] + matrix[i-1][j];
            }
        }

        // sol
        std::vector<int> sub(m);
        int ans = 0;
        for(int a = -1; a < n - 1; a++) {
            for(int b = a+1; b < n; b++) {
                // cout<<a<<" "<<b<<"\n";
                if(a+1 == b) {
                    // no subtraction at all
                    ans += countSubarrays(matrix[b], target);
                    continue;
                } 
                sub.clear();
                sub.resize(m);
                for(int j = 0; j < m; j++) {
                    sub[j] = matrix[b][j] - matrix[a+1][j];
                }
                ans += countSubarrays(sub, target);
            }
        }
        return ans;  
    }
};
