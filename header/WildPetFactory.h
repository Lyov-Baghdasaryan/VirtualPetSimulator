#ifndef WILDPETFACTORY_H
#define WILDPETFACTORY_H
#include <iostream>
#include "AbstractPetFactory.h"

class WildPetFactory : public AbstractPetFactory
{
  public:
    Pet* createMammal(const std::string& name, int age) override;
    Pet* createBird(const std::string& name, int age) override;
};

#endif
