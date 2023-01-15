#include <iostream>

void swap(int& x, int& y) {
    // here x and y are passed by reference, using references
    int temp = x;
    x = y;
    y = temp;
}

int main() {

    int m = 9;
    int n = 8;
    swap(m, n); // m and n are getting passed by reference
    std::cout<<m<<" "<<n<<"\n";
    return 0;
}