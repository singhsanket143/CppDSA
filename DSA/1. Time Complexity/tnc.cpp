#include <math>
void f1(int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        count += i;
    }
}

void f2(int n) {
    int count = 0;
    for(int i = 0; i < n/2; i++) {
        count += i;
    }
}

void f3(int n, int m) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        count += i;
    }
    int count = 0;
    for(int i = 0; i < m; i++) {
        count += i;
    }
}

void f4(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            count += 1;
        }
    }
}

void f5(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            count += 1;
        }
    }
}

void f6(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 2;
    }
}

void f7(int n) {
    int count = 0;
    for(int i = 1; i <= n; i *= 2) {
        count++;
    }
}

void f8(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sqrt(n); j++) {
            count++;
        }
    }
}

void f9(int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += i;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans += (i+j);
        }
    }
}

void f10(int n) {
    int count = 0;
    for(int i = n; i > 0; i /= 3) {
        count++;
    }
}

void f11(int n) {
    int i = 1, s = 1;
    while(s <= n) {
        i++;
        s += i;
    }
}

///