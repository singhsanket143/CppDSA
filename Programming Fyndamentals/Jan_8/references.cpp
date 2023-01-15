#include <iostream>

int main() {

    int a = 10;
    int& refa = a;
    std::cout<<a<<" "<<refa<<"\n";
    refa = 99;
    std::cout<<a<<" "<<refa<<"\n";
    a = 88;
    std::cout<<a<<" "<<refa<<"\n";

    // int& refb; // throws error
    int *ptr;
    return 0;
}