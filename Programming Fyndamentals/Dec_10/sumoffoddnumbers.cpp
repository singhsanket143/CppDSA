#include <iostream>
int main() {

    int n;
    std::cin>>n;
    int sum = 0, num = 1;
    while(num <= n) {
        if(num % 2 != 0) {
            sum += num;
        }
        num++;
    }
    std::cout<<sum<<"\n";
    return 0;
}