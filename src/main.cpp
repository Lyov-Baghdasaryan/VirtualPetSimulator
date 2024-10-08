#include <iostream>
#include <string>
#include "../header/PetAdoptionCenter.h"
#include "../header/DomesticPetFactory.h"
#include "../header/WildPetFactory.h"

int main(){
    while(true){
        std::cout << "Enter (1) to adopt a Domestic Pet" << std::endl;
        std::cout << "Enter (2) to adopt a Wild Pet" << std::endl;
        std::cout << "Enter (3) to Exit" << std::endl;
        int choice;
        std::cout << "Enter your choice -> ";
        std::cin >> choice;

        if(choice == 1){
            PetAdoptionCenter& center = PetAdoptionCenter::getInstance(new DomesticPetFactory());
            std::string type, name;
            int age;
            std::cout << "Enter the type of domestic pet (dog/parrot) -> ";
            std::cin >> type;
            std::cout << "Enter the name -> ";
            std::cin >> name;
            std::cout << "Enter the age -> ";
            std::cin >> age;

            center.adoptPet(type, name, age);
            break;
        }
        if(choice == 2){
            PetAdoptionCenter& center = PetAdoptionCenter::getInstance(new WildPetFactory());
            std::string type, name;
            int age;
            std::cout << "Enter the type of wild pet (lion/eagle) -> ";
            std::cin >> type;
            std::cout << "Enter the name -> ";
            std::cin >> name;
            std::cout << "Enter the age -> ";
            std::cin >> age;

            center.adoptPet(type, name, age);
            break;
        }
        if(choice == 3){
            break;
        }

        std::cout << "Invalid choice, Please try again" << std::endl;
    }

    return 0;
}