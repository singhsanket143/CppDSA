#include <iostream>
void fun(int **arr2, int m, int n) {
    std::cout<<arr2[0][0]<<"\n";
}

void gun(int arr[2][2], int m, int n) {
    std::cout<<arr[0][0]<<"\n";
}

void run(int arr[][2], int m, int n) {
    std::cout<<arr[0][0]<<"\n";
}

int main() {

    int arr[3][2]; // 3 rows and 2 cols -> total cells 3*2=6
    int arr1[2][2] = {{1,4}, {11,22}};
    /**
     * 1    4. -> row 0
     * 11   22 -> row 1
    */

    std::cout<<arr1[0][0]<<" "<<arr1[0][1]<<" "<<arr1[1][0]<<" "<<arr1[1][1]<<"\n";

    // update
    arr1[0][0] = 99;
    std::cout<<arr1[0][0]<<"\n";

    int m = 2;
    int n = 2;

    for(int row = 0; row < m; row++) {
        // we will go to each tow
        for(int col = 0; col < n; col++) {
            // for the curr row, we go to all columns
            std::cout<<arr1[row][col]<<" ";
        }
        // when the loop of col ends, we are done with one row
        std::cout<<"\n";// let's move to new line for next row
    }
    int *primary[2];
    primary[0] = arr1[0];
    primary[1] = arr1[1];
    fun(primary, 2, 2);

    gun(arr1, m, n);

    run(arr1, m, n);

    int r ;
    int c ;
    std::cin>>r>>c;
    int grid[r][c];

    /**
     * 
     * int arr[] = {1,2,3}; // int *arr
     * int arr2[][] = {{1,2,3}, {4,5,6}} // int **arr2
     *  
     *  [[1,2,3] [4,5,6]]
     *  
    */
    return 0;
}

// int arr[]; // int *arr

/**
 * 
 * []       []      []  -> secondary
 * 0x7a     0x5a    0x4a
 * 
 * [0x7a,0x5a,0x4a] -> primary
 * 0x10a
 * 
 * cout<<primary -> int **
*/