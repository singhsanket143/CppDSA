#include <stack>
#include <iostream>

int main()
{
    std::stack<int> st;
    st.push(10);
    st.push(11);
    st.push(12);
    std::cout<<st.top()<<"\n";
    st.pop();
    std::cout<<st.top()<<"\n";
    std::cout<<st.empty()<<"\n";
    return 0;
}
