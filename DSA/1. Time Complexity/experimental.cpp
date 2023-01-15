#include <iostream>
int main() {

    int sum = 0;
    for(int i = 0; i < 100000; i++) {
        sum += i;
    }
    std::cout<<sum<<"\n";
    return 0;
}