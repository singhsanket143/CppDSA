#include <iostream>
#include <unordered_map>

int main() {

    // initialise an unordered map
    std::unordered_map<std::string, int> mp;
    std::unordered_map<std::string, int> mp1 = { {"csk", 2} ,  {"pbks", 1},  {"mi", 0} };

    // insert a new key value pair inside your map
    mp["csk"] = 2;
    mp["pbks"] = 1;
    mp["mi"] = 0;

    // access a value for the given key
    std::cout<<mp["csk"]<<" "<<mp1["mi"]<<" "<<mp["kkr"]<<"\n"; // doesnt throw error if key not found

    // whether a key is present with some value
    std::cout<<mp.count("csk")<<" "<<mp.count("srh")<<"\n";

    // size of the map
    std::cout<<mp.size()<<"\n";

    // enhanced for loop for accessing map
    for(auto p : mp) { // <p1, p2> // first->key, second->value
        std::cout<<p.first<<" "<<p.second<<"\n";
    }

    // better way to access elements
    std::cout<<mp.at("csk")<<"\n"; // throws error if key not found

    // find -> if you found the element, it returns the iterator to that element
    // if the element is not present it returns an iterator beyond the map i.e. end
    auto it = mp.find("pbks");
    std::cout<<(*it).first<<" "<<(*it).second<<"\n";
    std::cout<<(mp.find("dc") != mp.end());

    mp.erase(it); // deletes an entry
    return 0;
}