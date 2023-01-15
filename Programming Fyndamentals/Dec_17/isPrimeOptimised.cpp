#include <iostream>

int main() {

    int x;
    std::cin>>x;
    bool isPrime = true; // initially we assume that x should be prime, 
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            // we found a number in this range that divides x completely
            isPrime = false; // number is no more a prime
            break; // we don't need to check further
        }
    }
    if(isPrime) {
        std::cout<<"Prime";
    } else {
        std::cout<<"Composite";
    }

    return 0;
}