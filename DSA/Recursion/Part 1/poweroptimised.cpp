#include <iostream>

int f(int a, int b) {
    /**
     * time: O(logb)
    */
    if(b == 0) return 1;
    int value = f(a, b/2);
    if(b % 2 == 0) {
        // if b is even
        return value * value;
    } else {
        // if b is odd
        return a * value * value;
    }
}

int main() {
    std::cout<<f(2, 7);
    return 0;
}