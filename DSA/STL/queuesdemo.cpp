#include <queue>
#include <iostream>
int main()
{
    std::queue<int> qu; // FCFS
    qu.push(10);
    qu.push(20); // [20, 30, 40
    qu.push(30);
    qu.push(40);
    qu.pop();
    std::cout<<qu.front()<<"\n";
    std::cout<<qu.size()<<"\n";
    return 0;
}
