#include <iostream>
struct Product {
    int price;
    std::string name;
    float discount;
};
int main() {

    Product p;
    p.price = 10;
    p.name = "pencil";
    p.discount = 0.0;

    std::cout<<p.name<<" "<<p.price<<" "<<p.discount<<"\n";

    Product* p1 = new Product;
    // (*p1).price = 7;
    // (*p1).name = "eraser";
    // (*p1).discount = 0.0;

    // std::cout<<(*p1).name<<" "<<(*p1).price<<" "<<(*p1).discount<<"\n";

    p1->price = 7;
    p1->name = "eraser";
    p1->discount = 0.0;
    std::cout<<p1->price<<" "<<p1->name<<" "<<p1->discount<<"\n";

    delete p1;
    return 0;
}