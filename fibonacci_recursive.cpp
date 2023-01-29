#include <iostream>

int f(int n) {
    if(n == 0 or n == 1) return n; 
    return f(n-1) + f(n-2);
}

int main() {

    std::cout<<f(8);
    return 0;
}
