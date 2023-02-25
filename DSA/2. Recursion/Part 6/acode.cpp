#include <iostream>
#include <string> 
void f(std::string &str, int i, std::string out) {
    if(i == str.size()) {
        std::cout<<out<<"\n";
        return;
    }
    if(i == str.size() - 1) {
        // we are at the last index
        int one = str[i] - '0'; // '9' - '0' -> 9
        f(str, i + 1, out + (char)(64 + one));
    } else {
        int one = str[i] - '0';
        // std::string pair = "";
        // pair += str[i]; // 123, 0, -> "" + '1' + '2' -> "12"
        // pair += str[i+1];
        // int two = std::stoi(pair); // "12" -> 12
        int c1 = str[i] - '0'; // 1
        int c2 = str[i+1] - '0'; // 2
        int two = c1*10 + c2; // 1*10 + 2 -> 12
        f(str, i + 1, out + (char)(64 + one));
        if(two <= 26) {
            f(str, i + 2, out + (char)(64 + two));
        }
    }
}

int main() {
    std::string str = "25114";
    f(str, 0, "");
    return 0;
}