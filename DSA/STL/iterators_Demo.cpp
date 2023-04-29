#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v {1,2,3,4,5};
    std::vector<int>::iterator it = v.begin(); // auto 
    for(it = v.begin(); it != v.end(); it++) {
        std::cout<<*it<<"\n";
    }
    it--;
    std::cout<<*it<<"\n";
    std::sort(v.begin(), v.end()); // [begin , end)
    return 0;
}
