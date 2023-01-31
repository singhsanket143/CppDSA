#include <iostream>

int f(int n) {
    if(n == 0) return 0; // if n is 0, digit sum is 0 only
    return f(n / 10) + (n % 10); // bring me sum of n/10, I will add my last digit to it
}

int main() {
    std::cout<<f(12345);
}