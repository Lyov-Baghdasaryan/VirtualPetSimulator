#ifndef PARROT_H
#define PARROT_H
#include <iostream>
#include "pet.h"

class Parrot : public Pet
{
public:
    Parrot(const std::string& name, int age);
    void makeSound() const override;
    void eat() const override;
};

#endif
