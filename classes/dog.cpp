#include "dog.h"
#include <iostream>

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
    std::cout << "Dog constructor called for " << name << " at address " << this << '\n';
}

Dog::~Dog(){
    delete p_age;
    p_age = nullptr;
    std::cout << "Dog destructor called for " << name << " at address " << this << '\n';
}
[[nodiscard]] auto Dog::get_age() const -> int { return (p_age != nullptr) ? *p_age : 0; }
