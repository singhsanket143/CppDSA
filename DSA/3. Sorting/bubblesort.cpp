#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &arr) {
    // Time: O(n^2) Space:O(1)
    int n = arr.size();
    for(int i = 0; i < n; i++) { // iteration count
    bool swapped = false;
        for(int j = 0; j < n - i - 1 ; j++) { // actual swapping loop
            if(arr[j] > arr[j+1]) {
                swapped = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(!swapped) return;
    }
}

int main() {
int n;
    std::cin>>n;
    std::vector<int> arr;
    while(n--) {
        int x;
        std::cin>>x;
        arr.push_back(x);
    }
    bubble_sort(arr);
    for(int i = 0 ; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

// [1,2,3,4,5]