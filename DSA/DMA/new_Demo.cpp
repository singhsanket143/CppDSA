#include <iostream>
float* f;
void fun() {
    int x = 10; // stack memory variable
    int* p = new int(33);
    std::cout<<p<<" "<<*p<<"\n";
    *p = 10;
    std::cout<<*p<<"\n";

    f = new float(4.5);
    std::cout<<*f<<"\n";
}

int main() {
    float ff = 8.5;
    f = &ff;
    std::cout<<"before"<<*f<<"\n";
    fun();
    std::cout<<"after"<<*f<<"\n";
    return 0;
}