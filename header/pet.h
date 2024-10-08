#ifndef PET_H
#define PET_H
#include <string>

class Pet{
public:
    Pet(const std::string& name, int age);
    virtual void makeSound() const = 0;
    virtual void eat() const = 0;
    void displayInfo() const;
    virtual ~Pet() = default;
private:
    std::string name;
    int age;
};

#endif
