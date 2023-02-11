#include <iostream>
#include <math.h>
// https://www.hackerrank.com/challenges/the-power-sum/problem?isFullScreen=true
int result = 0;
void f(int x, int n, int i) {
    //std::cout<<x<<" "<<n<<" "<<i<<"\n";
    int p = (int)pow(i, n); // i^n
    if(x == 0) {
        result++;// we found one valid answer
        return;
    }
    if(p > x) {
        return;
    }
    if(x < 0) {
        return;
    }
    
    f(x - p, n, i+1);
    f(x, n, i+1);
}
int powerSum(int X, int N) {
    f(X, N, 1);
    return result;
}

int main()
{
    int x;
    int n;
    std::cin>>x>>n;
    std::cout<<powerSum(x, n)<<"\n";
    return 0;
}


