
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << "**************** Animal Example **************** " << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog Type: " << dog->getType() << " " << std::endl;
    std::cout << "Cat Type: " << cat->getType() << " " << std::endl;
    
    dog->makeSound();
    cat->makeSound();
    animal->makeSound();

    delete  animal;
    delete  dog;
    delete  cat;

    std::cout << std::endl << "**************** WrongAnimal Example **************** " << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}