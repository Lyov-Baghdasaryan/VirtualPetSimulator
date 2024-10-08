#include <iostream>
#include "../header/eagle.h"

Eagle::Eagle(const std::string& name, const int age) : Pet(name, age) {}

void Eagle::makeSound() const {
    std::cout << "Krrr" << std::endl;
}

void Eagle::eat() const {
    std::cout << "Eagle eat something" << std::endl;
}