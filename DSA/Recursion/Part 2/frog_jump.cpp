#include <iostream>
#include <vector>
#include <math.h>
std::vector<int> h; // heights
// Approach 1
int f(int i, int n) { // returns the minimum cost to reach Nth stone from ith stone
    if(i == n) { // i == n
        return 0; // we dont need any cost to jump from N->N
    }
    if(i == n - 1) { // we are at the second last stone
        return f(i+1, n) + abs(h[i] - h[i+1]);
    }
    return std::min(f(i+1, n) + abs(h[i] - h[i+1]), f(i+2, n) + abs(h[i] - h[i+2]));
}

// Approach 2 HW

int main(){
    int n;
    std::cin>>n;
    // to make 1 based index
    h.push_back(0); // on 0th index we store dummy
    for(int i = 0; i < n; i++) {
        int x;
        std::cin>>x;
        h.push_back(x);
    }
    std::cout<<f(1, n)<<"\n";
    return 0;
}
// [0, 10, 30, 40, 20]