#include <iostream>
#include "../header/pet.h"

Pet::Pet(const std::string& name, const int age) : name(name), age(age) {}

void Pet::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}