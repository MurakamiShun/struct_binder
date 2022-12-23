#include <iostream>
#include "struct_binder.hpp"

struct Base{};

struct Derived : Base{
    int a,b,c;
};

int main(){
    Derived d = {{}, 0, 1, 2};
    struct_binder::get<0>(d) = 10;
    std::cout << d.a << std::endl;
}