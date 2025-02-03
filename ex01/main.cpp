#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    std::cout << "\n==== Creating Animals ====\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n==== Deleting Animals ====\n" << std::endl;
    delete j;
    delete i;

    std::cout << "\n==== Testing Deep Copy ====\n" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "\n==== Creating Animal Array ====\n" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    std::cout << "\n==== Deleting Animal Array ====\n" << std::endl;
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
