#include <iostream>

void f(int n) {
    if(n == 0) return; // if n is 0, no natural number expected
    std::cout<<n<<"\n"; // self work, we printed n first
    f(n-1); // assumption, I have printed n, now delegating task to someone else for n-1

}

int main() {

    f(5);
    return 0;
}