#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat( void )
{
    std::cout << "Destroying Cat's Brain" << std::endl;
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain(*src._brain);
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}
