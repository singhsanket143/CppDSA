#include <iostream>

char f(char root, long long int n, long long int k) {
    if(n == 1) {
        return root;
    }
    long long int value = (1L << (n-1)) / 2;
    if(k <= value) {
        // jump left
        return f(root, n-1, k);
    } else {
        char new_root = (root == 'M') ? 'F' : 'M';
        return f(new_root, n-1, k - value);
    }
}

int main() {
    int t;
    std::cin>>t;
    while(t--) {
        long long int n, k;
        std::cin>>n>>k;
        char result = f('M', n, k);
        if(result == 'M') {
            std::cout<<"Male\n";
        } else {
            std::cout<<"Female\n";
        }
    }
    return 0;
}