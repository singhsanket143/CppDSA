#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int spaces;

    // no of spaces for first row
    if(n%2 == 0) {
        spaces = 2*(n - 1);
    } else {
        spaces = 2*(n - 1) - 1;
    }
    for(int row = 1; row <= n; row++) {
        for(int i = 1; i <= spaces; i++) {
            std::cout<<" ";
        }
        spaces -= 2; // for next row
        for(int num = 1; num <= 2*row - 1; num++) {
            std::cout<<num<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
/**
 * 5
       1 
     1 2 3 
   1 2 3 4 5 
 1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
*/