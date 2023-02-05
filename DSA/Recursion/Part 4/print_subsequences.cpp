#include <iostream>

void f(std::string &str, int i, std::string output) {
    if(i == str.size()) {
        std::cout<<output<<"\n";
        return;
    }
    f(str, i + 1, output + str[i]);
    f(str, i + 1, output);
}

int main() {
    std::string s = "abc";
    f(s, 0, "");
    return 0;
}