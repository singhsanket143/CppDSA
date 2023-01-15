#include <iostream>

int main() {

    int x = 10;
    float y = 9.8;
    bool z = 1;

    // to store the address of x, we will make integer pointer
    int * ptr = &x;
    // to store the address of y, we will make float pointer
    float* ptrf = &y;
    // to store the address of z, we will make a bool pointer
    bool *ptrb = &z;

    std::cout<<"Address of x is "<<&x<<" and content of ptr is "<<ptr<<"\n";
    std::cout<<"Address of y is "<<&y<<" and content of ptrf is "<<ptrf<<"\n";
    std::cout<<"Address of z is "<<&z<<" and content of ptrb is "<<ptrb<<"\n";


    std::cout<<"Address of ptr itself is "<<&ptr<<"\n";
    return 0;
}