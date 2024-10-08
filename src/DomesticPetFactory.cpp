#include <iostream>
#include <string>
#include "../header/DomesticPetFactory.h"
#include "../header/dog.h"
#include "../header/parrot.h"

Pet* DomesticPetFactory::createMammal(const std::string &name, int age) {
    return new Dog(name, age);
}

Pet *DomesticPetFactory::createBird(const std::string &name, int age) {
    return new Parrot(name, age);
}



