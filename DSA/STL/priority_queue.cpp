#include <iostream>
#include <vector>
#include <queue>

int main() {

    std::vector<int> arr {5,4,1,9,3,2,0,6,11,8};
    // std::priority_queue<int> qu; // default priority queue, has maximum element as the priority
    std::priority_queue<int, std::vector<int>, std::greater<int> > qu; // priority is minimum element
    for(int i = 0; i < arr.size(); i++) {
        qu.push(arr[i]); // O(logn)
    }
    // highest priority element
    std::cout<<qu.top()<<"\n"; // O(1)
    // remove some elements
    qu.pop(); // 11 // O(logn)
    qu.pop(); // 9
    std::cout<<qu.top()<<"\n";


    return 0;
}