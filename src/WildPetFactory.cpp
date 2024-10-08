#include <iostream>
#include <string>
#include "../header/WildPetFactory.h"
#include "../header/lion.h"
#include "../header/eagle.h"

Pet* WildPetFactory::createMammal(const std::string &name, int age) {
    return new Lion(name, age);
}

Pet* WildPetFactory::createBird(const std::string &name, int age) {
    return new Eagle(name, age);
}

