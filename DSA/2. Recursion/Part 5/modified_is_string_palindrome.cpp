#include <iostream>

int i = 0;
bool f(std::string & str, int j) {
    /**
     * Time: O(N)
     * Space: O(N)
    */
    if(str[j] == '\0') {
        return true;
    }
    bool result = f(str, j + 1);
    // The below region will be executed once we come back from recursion
    if(i > j || result == false) {
        return result;
    }
    bool isPlaindrome = (str[i] == str[j]) and result;
    i++; // we move i for comparison next time
    return isPlaindrome;
}

int main() {
    std::string str = "ABBXCBA";
    std::cout<<f(str, 0)<<"\n";
    return 0;
}