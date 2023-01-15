#include <algorithm>
#include<vector>
class Solution {
public:
    int findPairs(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        int lo = 0, hi = 1;
        int result = 0;

        while(lo < nums.size() and hi < nums.size()) {
            if(lo == hi and hi < nums.size()) {
                hi++;
                continue;
            }
            if(abs(nums[lo] - nums[hi]) < k) {
                hi++;
            } else if(abs(nums[lo] - nums[hi]) > k) {
                lo++;
            } else {
                result++;
                int currLoElement = nums[lo];
                while(lo < nums.size() and nums[lo] == currLoElement) lo++;

                int currHiElement = nums[hi];
                while(hi < nums.size() and nums[hi] == currHiElement) hi++;
            }
        }
        return result;
    }
};