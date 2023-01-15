#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin>>a>>b>>c;

    if(a < b and a < c) {
        cout<<"A is the minimum\n";
    } else if(b < a and b < c) {
        cout<<"B is the minimum\n";
    } else {
        cout<<"C is the minimum\n";
    }

    return 0;
}