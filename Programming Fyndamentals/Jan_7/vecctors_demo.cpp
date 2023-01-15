/**
 * arrays have got specific size 
 * [] -> [1] -> [1, 10] 
*/
#include <iostream>
#include <vector>

int main() {

    std::vector<int> v1;
    v1.push_back(2); // [2] // adds element to the last
    v1.push_back(4); // [2,4]
    v1.push_back(6); // [2,4,6]

    for(int i = 0; i < v1.size(); i++) {
        std::cout<<v1[i]<<"\n";
    }
    std::cout<<"****\n";
    std::vector<int> v2 {4,6,7,8,9};
    for(int i = 0; i < v2.size(); i++) {
        std::cout<<v2[i]<<"\n";
    }
    std::cout<<"****\n";
    std::vector<int> v3(10, -1);
    
    v3.push_back(9);
    v3.push_back(10);
    v3.pop_back(); // remove the last element

    for(int i = 0; i < v3.size(); i++) {
        std::cout<<v3[i]<<"\n";
    }

    return 0;
}