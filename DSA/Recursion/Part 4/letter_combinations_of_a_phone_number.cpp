#include <iostream>
#include<vector>
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    std::vector<std::string> mapping {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    std::vector<std::string> result;
    void f(std::string &str, int i, std::string output) {
        if(i == str.size()) {
            result.push_back(output);
            return;
        }
        // go to the mapping of str[i] digit
        int digit = str[i] - '0'; // ex -> digit -> 6
        std::string charsOfMapping = mapping[digit];// mno
        for(int j = 0; j < charsOfMapping.size(); j++) {
            f(str, i + 1, output + charsOfMapping[j]);
        }
    }
    
    std::vector<std::string> letterCombinations(std::string digits) {
        result.clear();
        if(digits.size() == 0) return result;
        f(digits, 0, "");
        return result;
    }
};