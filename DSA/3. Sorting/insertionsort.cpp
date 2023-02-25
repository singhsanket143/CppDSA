#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &arr) {
    // Time: O(n^2) Space: O(1)
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        int j = i-1;
        int element = arr[i];
        while(j >= 0 and arr[j] > element) {
            arr[j+1] = arr[j];
            j--;
        }
        // when loop ends, jth index denotes the first element to the left of i, less than arr[i]
        arr[j+1] = element;
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
    insertion_sort(arr);
    for(int i = 0 ; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

// [5,4,3,2,1] element = 4