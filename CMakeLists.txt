cmake_minimum_required(VERSION 3.29)
project(VirtualPetSimulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(VirtualPetSimulator
    header/dog.h
    header/eagle.h
    header/lion.h
    header/parrot.h
    header/pet.h
    src/dog.cpp
    src/eagle.cpp
    src/lion.cpp
    src/main.cpp
    src/parrot.cpp
    src/pet.cpp
        header/DomesticPetFactory.h
        header/WildPetFactory.h
        src/PetAdoptionCenter.cpp
        src/DomesticPetFactory.cpp
        src/WildPetFactory.cpp
        header/PetAdoptionCenter.h)
