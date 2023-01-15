#include <iostream>
#include <vector>

void fun(std::vector<std::vector<int> > &grid1) {

}
int main() {
    int m = 5;
    int n = 10;
    std::vector<std::vector<int> > grid;
    std::vector<std::vector<int> > grid1(m, std::vector<int> (n, 0));


    /**
     * [ [0,0], [0,0] , [0,0] , [0,0] ] -> grid1
    */

    for(int i = 0 ; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cout<<grid1[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}