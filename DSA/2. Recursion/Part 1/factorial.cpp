#include<iostream>

// factorial recursive // f(n) = n * f(n-1);
int f(int n) { // n -> n-1 -> n-2 -> n-3 -> . . . . . 1
    // base case 
    if(n == 1) return 1;

    return n * f(n-1);
}

int fact(int n) {
    return (n == 1) ? 1 : (n * fact(n-1));
}

int main() {


    std::cout<<f(4)<<"\n";
    return 0;
}

/**
 * n = 5
 * return n * f(n--);
*/