#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "Proving makeSound() works:" << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << std::endl;

    std::cout << "Testing Deep Copy:" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
        tmp.makeSound();
    }

    std::cout << std::endl;

    std::cout << "Testing Array of Animals:" << std::endl;
    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    for ( int i = 0; i < 4; i++ ) {
        animals[i]->makeSound();
    }
    
    std::cout << std::endl;

    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
