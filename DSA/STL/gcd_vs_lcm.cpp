#include <iostream>
#include <unordered_map>

int main() {
    int t;
    std::cin>>t;
    while(t--) {
        int n;
        std::cin>>n;
        std::unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x;
            std::cin>>x;
            mp[x]++; // // [2,2,3,4,4] -> 2 // {2: 2,3: 1, 4: 2}
        }
        int ans = 0;
        for(auto p : mp) {
            int key = p.first; // 2
            if(mp.count(2*key)) {
                ans += (mp[key])*(mp[2*key]);
            }
        }
        std::cout<<ans<<"\n";

    }
    return 0;
}