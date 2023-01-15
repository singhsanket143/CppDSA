#include<iostream>
int main() {
    bool is_user_vip = false;
    bool is_user_super = true;
    bool is_user_premium = true;
    if(is_user_vip) {
        std::cout<<"Show vip content";
    } 
    else if(is_user_super) {
        std::cout<<"Show super content";
    } 
    else if(is_user_premium) {
        std::cout<<"Show premium content";
    } 
    else {
        std::cout<<"Ask user to pay";
    }
    return 0;
}