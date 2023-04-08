#include <iostream>
void fun() {
    int *p = new int(10);
    std::cout<<*p<<"\n";
    delete p;
    std::cout<<*p<<"\n";
}
int main() {
    fun();
    return 0;
}