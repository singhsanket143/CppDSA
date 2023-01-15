#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int a = 0; // second last
    int b = 1; // last
    if(n == 0) {
        std::cout<<a<<"\n";
    } else if(n == 1) {
        std::cout<<a<<" "<<b<<"\n";
    } else {
        std::cout<<a<<" "<<b<<" ";
        for(int i = 2; i <= n; i++) {
            int c = a + b;
            std::cout<<c<<" ";
            a = b;
            b = c;
        }
    }
    return 0;
}

// Takeaway: Can u try to print just the nth fibonacci number ?