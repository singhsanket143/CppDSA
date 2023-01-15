// https://leetcode.com/problems/ugly-number/description/
class Solution {
public:

    int repeatedDivision(int n, int factor) {
        while(n > 1 and (n%factor) == 0) {
            n = n / factor;
        }
        return n;
    }

    bool isUgly(int n) {
        int result;
        result = repeatedDivision(n, 2);
        result = repeatedDivision(result, 3);
        result = repeatedDivision(result, 5);
        return result == 1;
    }
};

/*

    80 
    80 -> 2*2*2*2*5

    80 / 2 -> 40 -> 40 / 2 -> 20 -> 20 / 2 -> 10 -> 10 / 2 -> 5
    5/3 -> x
    5 / 5 -> 1


    14 -> 14 / 2 -> 7 -> 7 / 2-> x
    7 / 3 -> x
    7 / 5 -> x
    7

    180 -> 180/2 -> 90 -> 90/2 -> 45 -> 45/2 -> x
    45 -> 45/3 -> 15 -> 15 / 3 -> 5 -> 5/3 -> x
    5 -> 5/5 -> 1
*/