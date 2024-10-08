#ifndef ABSTRACTPETFACTORY_H
#define ABSTRACTPETFACTORY_H
#include "pet.h"

class AbstractPetFactory
{
  public:
    virtual Pet* createMammal(const std::string& name, int age) = 0;
    virtual Pet* createBird(const std::string& name, int age) = 0;
    virtual ~AbstractPetFactory() = default;
};

#endif
