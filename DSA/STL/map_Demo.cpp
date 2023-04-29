#include <iostream>
#include <map>

int main(int argc, char const *argv[])
{
    std::map<std::string, int> mp;
    auto it = mp.begin();
    // store some values
    mp["mi"] = 1;
    mp["csk"] = 2;
    mp["kkr"] = 2;


    // loop over the map
    for(auto p : mp) {
        std::cout<<p.first<<" "<<p.second<<"\n";
    }

    mp["mi"]++;

    std::cout<<mp.count("kkr")<<"\n";

    
    return 0;
}
