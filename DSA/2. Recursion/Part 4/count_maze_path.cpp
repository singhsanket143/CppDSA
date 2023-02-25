#include <iostream>

int ways = 0;
void f(int i, int j, int n, int m, std::string output) {
    if(i == n-1 and j == m-1) {
        std::cout<<output<<"\n";
        ways++;
        return;
    }
    if(i >= n or j >= m) return; // we cant go beoynd the grid
    f(i, j + 1, n, m, output + "R"); // we took a move to the right side
    f(i + 1, j, n, m, output + "D"); // we took a move to the down side
}

int main() {

    f(0,0,3,3,"");
    std::cout<<ways<<"\n";
    return 0;
}