#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int num = 1;

    while(num <= 10) {
        sum += num;
        num += 1;
    }
    cout<<sum<<"\n";
    return 0;
}