#include<iostream>
int main() {
    int x = 7;
    int y = 3;
    /*
     1. Arithmetic -> Mathematical arithmetics operations
     + (plus) - (minus) *(asterisk) / (slash) % (modulo)
    */
    std::cout<<(x + y)<<"\n"; // addition
    std::cout<<(x - y)<<"\n"; // subtraction
    std::cout<<(x * y)<<"\n"; // multiplication
    std::cout<<(x / y)<<"\n"; // floor division -> quotient will be floored
    std::cout<<(x % y)<<"\n"; // remainder of the division, when x is divided by y, what is the remainder

    // 2. Assignment Operators -> Used to assign some value, or compute a value first and then assign
    int c = 18; // = -> assigning value 18 directly to c
    std::cout<<c<<"\n";
    c += 3; // first add 3 to current value of c and then assign this new value to c
    std::cout<<c<<"\n"; // 21
    c -= 5; // first sub 5 from the current value of x, & then assign this new val to c
    std::cout<<c<<"\n"; // 16
    c *= 2; // first mul 2 to current value of c and then assign this new value to c
    std::cout<<c<<"\n"; // 32
    c /= 3; // first divide c by 3 and then assign this new value to c
    std::cout<<c<<"\n"; //10
    c %= 5; 
    std::cout<<c<<"\n"; // 0

    // 3. Relational -> They determine relationship between values / variables after comparing them
    // returns true of false values
    std::cout<<(x == 7)<<"\n"; // double equals, it checks if x is equal to 7 or not
    std::cout<<(x < 4)<<"\n"; // is x less than 4 ?
    std::cout<<(x > 3)<<"\n"; // is x greater than 3 ?
    std::cout<<(x >= 8)<<"\n"; // is x greater than or equal to 8 ?
    std::cout<<(x <= 7)<<"\n"; // is x greater than or equal to 7 ?
    std::cout<<(x <= 10)<<"\n"; // is x greater than or equal to 10 ?
    std::cout<<(x != 3)<<"\n"; // is 7 not equal to 3 ? yes its not -> true

    // 4. Logical -> evaluate operands as boolean and then apply boolean logics
    // converts the operands to the boolean equivalent
    std::cout<<((3 < 5) and (6 != 6))<<"\n"; // logical and
    std::cout<<((3 < 5) && (6 != 6))<<"\n"; // logical and
    std::cout<<((3 != 5) and (3 < 5)) << "\n";
    std::cout<<((3 != 5) or (3 > 5))<<"\n"; // logical or
    std::cout<<((3 != 5) || (3 > 5))<<"\n"; // logical or
    std::cout<<!(3 < 5)<<"\n"; // logical not
    std::cout<<(not (3 < 5))<<"\n"; // logical not

    std::cout<<(3 and 4)<<"\n";
    std::cout<<(-3 && 4)<<"\n";

    int a = 2;
    int b = 3;
    std::cout<<((a -= 2) and (b += 3))<<"\n";
    std::cout<<a<<","<<b<<"\n";
    std::cout<<((b += 10) or (a += 2))<<"\n";
    std::cout<<a<<","<<b<<"\n";

    // 5. Bitwise operators
    std::cout<<(5 & 4)<<"\n"; // 4
    std::cout<<(6 & 5)<<"\n"; // 4 
    std::cout<<(6 | 5)<<"\n"; // 7
    std::cout<<(6 ^ 8)<<"\n"; // 14 -> xor
    std::cout<<(7 << 1)<<"\n";
    std::cout<<(3 << 2)<<"\n";
    std::cout<<(1 << 4)<<"\n";
    std::cout<<(7 >> 2)<<"\n";
    std::cout<<(~5)<<"\n";
    return 0;
}
