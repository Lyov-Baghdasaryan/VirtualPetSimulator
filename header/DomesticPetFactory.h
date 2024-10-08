#ifndef DOMESTICPETFACTORY_H
#define DOMESTICPETFACTORY_H
#include <iostream>
#include "AbstractPetFactory.h"

class DomesticPetFactory : public AbstractPetFactory
{
  public:
    Pet* createMammal(const std::string& name, int age) override;
    Pet* createBird(const std::string& name, int age) override;
};

#endif
