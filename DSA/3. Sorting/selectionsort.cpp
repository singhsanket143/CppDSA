#include <iostream>
#include <vector>

int get_min(std::vector<int> &arr, int idx) {
    // Time: O(n) Space: O(1)
    // in the range [idx, n-1] finds the minimum element and return it's indexs
    int n = arr.size();
    int result = INT_MAX; // largest positive integer value compatible to compiler
    int result_idx = -1;
    for(int i = idx; i < n; i++) {
        if(arr[i] < result) {
            result = arr[i];
            result_idx = i;
        }
    }
    return result_idx;
}

void selection_sort(std::vector<int> &arr) {
    // TIme: O(n^2) Space: O(1)
    int n = arr.size();
    for(int i = 0; i < n; i++) { // [i, n-1] -> unsorted region
        int min_idx = get_min(arr, i);
        // swap the min element with starting element of unsorted region
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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
    selection_sort(arr);
    for(int i = 0 ; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

// [1,2,3,4,5]