#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "pet.h"

class Dog : public Pet
{
    public:
        Dog(const std::string& name, int age);
        void makeSound() const override;
        void eat() const override;
};

#endif
