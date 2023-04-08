#include<iostream>
#include<stack>
class Solution {
public:
    std::string decodeAtIndex(std::string s, int k) {
        // stackof pair
        std::stack<std::pair<std::string, int> > st;
        int n = s.size();
        long long int len = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] >= 'a' and s[i] <= 'z') {
                // alphabet incoming
                std::string curr = "";
                curr += s[i];
                len++;
                st.push({curr, len});
            } else {
                int digit = s[i] - '0';
                if(len*digit >= k) break;
                len = len * digit;
            }
        }
        while(not st.empty()) {
            std::pair<std::string, int> p = st.top();
            st.pop();
            k = k % p.second;
            if(k == 0) return p.first;
        }
        return "";
    }
};

