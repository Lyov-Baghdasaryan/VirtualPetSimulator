#include <iostream>
#include <string>
#include <memory>
#include "../header/PetAdoptionCenter.h"

PetAdoptionCenter* PetAdoptionCenter::instance = nullptr;

PetAdoptionCenter::PetAdoptionCenter(){}

PetAdoptionCenter& PetAdoptionCenter::getInstance(AbstractPetFactory* petType){
    if(!instance){
        instance = new PetAdoptionCenter();
    }
    instance->data.reset(petType);
    return *instance;
}

void PetAdoptionCenter::adoptPet(const std::string& type, const std::string& name, int age) const{
    Pet* pet = nullptr;

    if(type == "dog"){
        pet = data->createMammal(name, age);
    }else if(type == "parrot"){
        pet = data->createBird(name, age);
    }else if(type == "lion"){
        pet = data->createMammal(name, age);
    }else if(type == "eagle"){
        pet = data->createBird(name, age);
    }

    if(pet){
        std::cout << "You adopted a pet" << std::endl;
        pet->displayInfo();
        pet->makeSound();
        pet->eat();
        delete pet;
    }else{
        std::cout << "Invalid pet type" << std::endl;
    }
}
