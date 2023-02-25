#include <iostream>

void f(int n, int r, int c) {
    if(r > n) return;
    if(c > r) {
        // current row is done, move to next row
        std::cout<<"\n";
        f(n, r+1, 1);
        return;
    }
    std::cout<<"*";
    f(n, r, c+1);
}

int main() {
    f(6, 1, 1);
    return 0;
}