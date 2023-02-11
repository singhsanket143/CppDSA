#include <iostream>

bool f(std::string &str, int i, int j) {
    // Time: O(N) Space: O(N)
    /*
        Checks whether the string from index i to j is a plalindrome or not ?
    */
   if(i > j) { // base case
        // empty string
        return true;
   }
   return (str[i] == str[j]) and f(str, i + 1,  j - 1);
}

int main() {
    std::string str = "SANKET";
    std::cout<<f(str, 0, str.size() - 1)<<"\n";
    return 0;
}
// naman
// abba