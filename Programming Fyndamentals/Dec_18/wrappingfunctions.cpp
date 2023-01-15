#include <iostream>

int reverse_a_number(int x) {
    int num = 0;
    while(x > 0) {
        int rem = x % 10;
        x = x / 10;
        num = num * 10 + rem;
    }
    return num;
}

int sum_of_digits(int x) { // declared and defined at same spot
    int sum = 0;
    while(x > 0) {
        int rem = x % 10;
        sum += rem;
        x = x / 10;
    }
    return sum;
}

void is_prime(int x); // declaring a function

int main() {

    std::cout<<reverse_a_number(1231)<<"\n";

    int userinput = 456;
    // std::cin>>userinput;
    std::cout<<sum_of_digits(userinput)<<"\n";
    is_prime(7);
    is_prime(11);
    return 0;
}

// we always don't need to return a value from function
void is_prime(int x) { // defining a function
    bool isPrime = true; // initially we assume that x should be prime, 
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            // we found a number in this range that divides x completely
            isPrime = false; // number is no more a prime
            break; // we don't need to check further
        }
    }
    if(isPrime) {
        std::cout<<"Prime";
    } else {
        std::cout<<"Composite";
    }
}