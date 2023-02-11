#include <iostream>

void f(int n, int r) {
    if(r > n) return;
    // self work -> print the rth row
    for(int col = 1; col <= r; col++) {
        std::cout<<"*";
    }
    std::cout<<"\n";
    // recursive assumption
    f(n, r+1);
}

int main() {
    f(5, 1);
    return 0;
}