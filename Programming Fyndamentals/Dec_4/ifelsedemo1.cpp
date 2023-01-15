#include<iostream>
int main() {
    bool are_user_credentials_correct;
    std::cin>>are_user_credentials_correct;
    if(are_user_credentials_correct) {
        std::cout<<"Show profile page";
    } 
    else {
        std::cout<<"Show login page";
    }
    return 0;
}