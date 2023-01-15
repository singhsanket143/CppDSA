#include <iostream>
 
bool is_even(int x) { // defining a function 
    // logic
    bool result;
    if(x % 2 == 0) {
        result = true;
    } else {
        result = false;
    }

    // return the value
    return result;
}

int main() {
    std::cout<<"Start\n";
    // bool response = is_even(12);
    // std::cout<<response<<"\n";
    std::cout<<is_even(12)<<"\n";
    std::cout<<is_even(13)<<"\n";
    std::cout<<is_even(14)<<"\n";
    std::cout<<is_even(16)<<"\n";
    std::cout<<is_even(19)<<"\n";
    return 0;
}