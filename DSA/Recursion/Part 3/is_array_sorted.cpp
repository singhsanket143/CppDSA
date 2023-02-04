#include <iostream>
#include <vector>

bool f(std::vector<int> &arr, int i) {
    if(i == arr.size() - 1) return true;
    return (arr[i] <= arr[i+1]) and f(arr, i+1);
}

int main() {

    std::vector<int> arr {1,2,3,4,15,6};
    std::cout<<f(arr, 0)<<"\n";
    return 0;
}