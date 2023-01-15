// https://leetcode.com/problems/factorial-trailing-zeroes/description/
class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        int num = n / 5;
        while(num > 0) {
            result += num;
            num = num / 5;
        }
        return result;
    }
};