#ifndef PETADOPTIONCENTER_H
#define PETADOPTIONCENTER_H
#include <iostream>
#include <memory>
#include "AbstractPetFactory.h"

class PetAdoptionCenter
{
  public:
    static PetAdoptionCenter& getInstance(AbstractPetFactory* petType);
    void adoptPet(const std::string& type, const std::string& name, int age) const;
  private:
    PetAdoptionCenter();
    std::unique_ptr<AbstractPetFactory> data;
    static PetAdoptionCenter* instance;
};

#endif