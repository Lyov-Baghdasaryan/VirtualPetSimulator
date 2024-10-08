#include <iostream>
#include "../header/lion.h"

Lion::Lion(const std::string& name, const int age) : Pet(name, age) {}

void Lion::makeSound() const {
    std::cout << "Grrrr" << std::endl;
}

void Lion::eat() const {
    std::cout << "Lion eat something" << std::endl;
}