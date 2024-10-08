#include <iostream>
#include "../header/dog.h"

Dog::Dog(const std::string& name, const int age) : Pet(name, age) {}

void Dog::makeSound() const {
        std::cout << "Haf-Haf" << std::endl;
}

void Dog::eat() const {
        std::cout << "Dog eat something" << std::endl;
}