#include <iostream>
void createGrid() {
    int** grid = new int*[5];
    for(int i = 0; i < 5; i++) {
        grid[i] = new int[10]();
    }
    grid[0][2] = 10;
    std::cout<<grid[0][2]<<"\n";

    for(int i = 0; i < 5; i++) {
        delete [] grid[i];
    }

    delete [] grid;
}
int main() {
    int x = 10;
    createGrid();
    return 0;
}