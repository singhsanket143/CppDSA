#include <iostream>

int f(int n) {
    if(n == 1 or n == 2) return n;
    return f(n-1) + (n-1) * f(n-2);
}

int main() {
    std::cout<<f(3)<<"\n";
    return 0;
}