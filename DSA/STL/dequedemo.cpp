#include <deque>
#include <iostream>

int main()
{
    std::deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(5);
    dq.push_front(6);
    dq.push_front(7);
    dq.push_front(8);
    // [7,6,5,10, 20, ]

    dq.pop_back();
    dq.pop_front();

    std::cout<<dq.front()<<" "<<dq.back()<<"\n";

    std::cout<<dq[0]<<" "<<dq[1]<<" "<<dq[1]<<"\n";
    dq[0] = 99;
    std::cout<<dq.at(0)<<" "<<dq.at(1)<<"\n";
    std::cout<<dq.size()<<"\n";
    return 0;
}
