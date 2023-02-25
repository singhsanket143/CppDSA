#include <iostream>
#include <vector>

bool f(std::vector<int> &arr, int i, int x) {
    /**
     * Time: O(N)
     * Space: O(N)
    */
    if(i == arr.size()) return false;
    return (arr[i] == x) or f(arr, i + 1, x);
}

int main() {
    std::vector<int> input {1, 9, -1, 3, 8, 6};
    int x = 18;
    std::cout<<f(input, 0, x)<<"\n";
    return 0;
}