#include <iostream>
#include "../header/parrot.h"

Parrot::Parrot(const std::string& name, const int age) : Pet(name, age) {}

void Parrot::makeSound() const {
    std::cout << "Haf-Krrr-Grrr" << std::endl;
}

void Parrot::eat() const {
    std::cout << "Parrot eat something" << std::endl;
}
