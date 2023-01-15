#include<iostream>

std::string multiplybydigit(std::string str, std::string d) { // "123", "4"
    int carry = 0;
    std::string result = "";
    int digit = d[0] - '0';
    for(int i = str.size() - 1; i >= 0; i--) {
        int currDigit = str[i] - '0'; // '2' - '0' -> 2
        int product = currDigit * digit;
        product += carry;
        int rem = product % 10;
        result = std::to_string(rem) + result;
        product /= 10;
        carry = product % 10;
    }
    return result;
}

int main() {
    std::string res = multiplybydigit("1002", "9");
    std::cout<<res<<"\n";
    return 0;
    /**
     * 1002 * 19
     *      1002
     *       219
     *      ----
     *      9018
     *     10020 
     *    200400  
     *     19038
     *    219438  
    */
}