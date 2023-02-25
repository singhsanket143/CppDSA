#include <iostream>
#include <vector>

std::vector<int> mergeTwoSortedArrays(std::vector<int> &a, std::vector<int> &b) {
    /**
     * Time: O(m+n)
     * Space: O(m+n) if we consider output array space otherwise constant
    */
    int n = a.size();
    int m = b.size();
    std::vector<int> c (n + m);
    int i = 0, j = 0, k = 0;
    while(i < n and j < m) {
        if(a[i] <= b[j]) {
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    // if array b has been exhausted -> j == m but i < n
    while(i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    // or if array a has been exhausted -> i == n but j < m
    while(j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
    return c;
}

int main() {

    std::vector<int> a {1,3,5,7};
    std::vector<int> b {2,4,8,10,12};
    std::vector<int> result = mergeTwoSortedArrays(a, b);
    for(int i = 0; i < result.size(); i++) {
        std::cout<<result[i]<< " ";
    }
    std::cout<<"\n";

    return 0;
}