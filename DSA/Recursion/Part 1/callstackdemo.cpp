#include <iostream>

void f() {
    std::cout<<"hey";
}

int g() {
    int r = 10;
    return r;
}

int main() {
    f();
    int x = g();

    return 0;
}