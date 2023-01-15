#include <iostream>
int main() {

    int n;
    std::cin>>n; // user input

    // we need to do some task for every row
    for(int row = 1; row <= n; row++) {
        // write the logic to repeat for every row
        for(int num = 1; num <= row; num++) {
            std::cout<<row<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}

/**
 * n = 4
1
2 2 
3 3 3 
4 4 4 4 

*/