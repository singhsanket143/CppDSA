#include <iostream>
using namespace std;

int main() {

    int x;
    cin>>x;
    if((x&1) == 0) {
        cout<<"Even\n";
    } else {
        cout<<"Odd\n";
    }
    return 0;
}