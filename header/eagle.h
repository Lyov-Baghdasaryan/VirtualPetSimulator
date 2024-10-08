#ifndef EAGLE_H
#define EAGLE_H
#include <iostream>
#include "pet.h"

class Eagle : public Pet
{
public:
    Eagle(const std::string& name, int age);
    void makeSound() const override;
    void eat() const override;
};

#endif //EAGLE_H
