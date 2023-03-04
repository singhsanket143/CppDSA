#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

int genRandom(int max, int min) {
    srand(time(0));
	int range = max - min + 1;
	int num = rand() % range + min;
    return num;
}

int partition(std::vector<int> &arr, int l, int r, int pi) {
    /**
     * Time: O(n)
     * Space: O(1)
    */
    int pivot = arr[pi];
    // swap pivot index element with the last index
    std::swap(arr[pi], arr[r]);
    int m = l;
    for(int i = l; i <= r-1; i++) {
        if(arr[i] < pivot) {
            std::swap(arr[i], arr[m]);
            m++;
        }
    }
    std::swap(arr[m], arr[r]);
    return m;
}

void f(std::vector<int> &arr, int l, int r) {
    if(l < r) {
        int pi = genRandom(r, l);
        int x = partition(arr, l, r, pi);
        f(arr, l, x-1);
        f(arr, x+1, r);
    }
}

void quick_sort(std::vector<int> &arr) {
    f(arr, 0, arr.size() - 1);
}

int main() {
    std::vector<int> arr {1,10,19,100};
    quick_sort(arr);
    for(int i = 0; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}