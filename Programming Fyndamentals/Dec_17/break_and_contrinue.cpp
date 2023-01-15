#include <iostream>

int main() {

    for(int i = 1; i <= 10; i++) {
        if(i%3 == 0) {
            // if the number is divisible by 3, we dont want to print it
            std::cout<<"hello ";
            continue;
            // std::cout<<"hello";
        }
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    for (int i = 1; i <= 10; i++) {
        if(i%3 == 0) {
            // if the number is divisible by 3, we dont want to print it
            std::cout<<"hello ";
            break;
            // std::cout<<"hello";
        }
        std::cout<<i<<" ";
    }
    
    return 0;
}