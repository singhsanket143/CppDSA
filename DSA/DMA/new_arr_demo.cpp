#include <iostream>
void fun() {
    int* arr = new int[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for(int i = 0; i < 10; i++) {
        std::cout<<arr[i]<<" ";
    }
    delete [] arr; // free up the whole array space
}

int main() {
    fun();
    return 0;
}