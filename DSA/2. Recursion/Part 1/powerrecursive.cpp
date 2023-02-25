#include <iostream>

int f(int a, int b) {
    if(b == 0) { // base case
        return 1;
    }
    return a * f(a, b-1);
}

int main() {
    std::cout<<f(2, 1);
    return 0;
}