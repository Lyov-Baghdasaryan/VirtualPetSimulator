#ifndef LION_H
#define LION_H
#include <iostream>
#include "pet.h"

class Lion : public Pet
{
public:
    Lion(const std::string& name, int age);
    void makeSound() const override;
    void eat() const override;
};

#endif //LION_H
