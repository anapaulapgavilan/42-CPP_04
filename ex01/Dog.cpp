#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog( void )
{
    std::cout << "Destroying Dog's Brain" << std::endl;
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*src._brain); // Deep Copy
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        delete this->_brain;
        this->_brain = new Brain(*src._brain); // Deep Copy
    }
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}
