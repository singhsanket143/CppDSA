#include <iostream>

int main() {

    int x;
    std::cin>>x;
    int num = 0;
    while(x > 0) {
        int rem = x % 10;
        x = x / 10;
        num = num * 10 + rem;
    }

    std::cout<<num<<"\n";

    return 0;
}