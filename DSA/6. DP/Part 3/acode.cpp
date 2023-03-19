#include <iostream>
#include<vector>
#define ll long long int
std::string decode(std::string &input) { // 
    std::string res = "";
    if(input.size() == 1) {
        // length 1
        res += (char)(64 + (input[0] - '0')); // '3' -- '0' -> 51 - 48 -> 3
    } else {
        // length 2 -> // 12 -> 1*10 + 2
        int num = (input[0] - '0')*10 + (input[1] - '0');
        res += (char)(64 + num);
    }
    return res;
}

void f(std::string &num, int i, std::string out) {
    if(i < 0) {
        std::cout<<out<<"\n";
        return;
    }
    if(i == 0) {
        std::string one = "";
        one += num[i];
        f(num, i - 1, decode(one) + out);
        return;
    }
    std::string one = "";
    std::string two = "";
    one += num[i];
    f(num, i-1, decode(one) + out);
    two += num[i-1];
    two += num[i];
    int value = (two[0] - '0')*10 + (two[1] - '0');
    if(value <= 26) {
        f(num, i-2, decode(two) + out);
    }
}

std::vector<ll> dp;

ll f_td(std::string &num, int i) {
    if(i == 0) return 1;
    if(i < 0) return 1; 
    if(dp[i] != -1) return dp[i];
    ll ans = 0;
    if(num[i] - '0' > 0)
        ans += f_td(num, i-1);
    if(i-1 >= 0 and num[i-1]-'0' > 0 and (num[i-1]-'0')*10 + (num[i] - '0') <= 26) {
        ans += f_td(num, i-2);
    }
    return dp[i] = ans;
}


int main() {
    dp.clear();
    dp.resize(50005, -1);
    std::string num;
    std::cin>>num;
    while(num[0] != '0') {
        std::cout<<f_td(num, num.size() - 1)<<"\n";
        dp.clear();
        dp.resize(50005, -1);
        std::cin>>num;
    }
    
    return 0;
}
// 23012