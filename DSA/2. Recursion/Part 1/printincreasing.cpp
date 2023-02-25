#include <iostream>

void f(int n) {
    if(n == 0) return; // dont print anything
    f(n - 1); // first go and print the first n-1 natural no in increasing order
    std::cout<<n<<"\n"; // easiest task to do
}

int main() {
    f(10);
    return 0;
}