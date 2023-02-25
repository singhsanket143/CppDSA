#include <iostream>
#include <vector>

void f(std::string &str, int i, std::string output) {
    if(i == str.size()) {
        std::cout<<output<<"\n";
        return;
    }
    if(str[i] == 'x') {
        // dont want the curr char in output
        f(str, i + 1, output); // not include the curr char in the output
    } else {
        // we want the curr char in output
        f(str, i + 1, output + str[i]); // include the curr char in the output
    }
}

void fo(std::string &str, int i, std::vector<char> &output) {
    if(i == str.size()) {
        for(int i = 0; i < output.size(); i++) {
            std::cout<<output[i];
        }
        std::cout<<"\n";
        return;
    }
    if(str[i] == 'x') {
        // dont want the curr char in output
        fo(str, i + 1, output); // not include the curr char in the output
    } else {
        // we want the curr char in output
        output.push_back(str[i]); // adding char to output
        fo(str, i + 1, output); // include the curr char in the output
    }
} // c + c + c + .... +c + n -> (n-1)c + n -> O(n)

int main() {
    std::string str = "moabxxdxcyx";
    std::vector<char> v;
    fo(str, 0, v);
    return 0;
}