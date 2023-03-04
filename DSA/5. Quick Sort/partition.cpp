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

int main() {
    std::vector<int> arr {9, 8, 7, 7, -1, 2, 5, 10, 11, 4};
    int l = 0, r = arr.size() - 1;
    int pi = genRandom(r, l);
    std::cout<<"Pivot is "<<arr[pi]<<"\n";
    int x = partition(arr, l, r, pi);
    std::cout<<x<<"\n";
    for(int i = 0; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}