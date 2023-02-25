#include <iostream>
#include <vector>

int f(std::vector<int> &arr, int i) {
    /**
     * Time: O(N)
     * Space: O(N)
    */
    // base case
    if(i == arr.size()) return 0;
    return f(arr, i + 1) + arr[i];
}

int main() {

    std::vector<int> input {1,2,3,-1,4,5};
    std::cout<<f(input, 0)<<"\n";
    return 0;
}