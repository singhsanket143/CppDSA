#include <iostream>

void pascalTriangle(int n) {
    if(n >= 1) {
        std::cout<<1<<"\n";
    }
    for(int row = 2; row <= n; row++) {
        int prev = 1;
        std::cout<<prev<<" ";
        for(int col = 1; col <= row - 1; col++) {
            /*
                nCr = ((n - r + 1) / r) * nCr-1
                // n -> row - 1
                // r -> col
            */
           int nCr = ((row - col) * prev) / col ;
           std::cout<<nCr<<" ";
           // for next iteration set nCr to be the prev value
           prev = nCr;
        }
        std::cout<<"\n"; // at the end of one row, move to next line
    }
}

int main() {
    pascalTriangle(7);
    return 0;
}