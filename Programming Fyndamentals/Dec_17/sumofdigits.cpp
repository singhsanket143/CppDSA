#include <iostream>

int main() {

    int x;
    std::cin>>x;

    int sum = 0;
    while(x > 0) {
        int rem = x % 10;
        sum += rem;
        x = x / 10;
    }

    std::cout<<sum<<"\n";

    return 0;
}