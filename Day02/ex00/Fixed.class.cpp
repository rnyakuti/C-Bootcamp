#include "Fixed.class.hpp"
const int	Fixed::_fb = 8;
Fixed::Fixed(void){
	this->_fpval = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	this->setRawBits(rhs.getRawBits());
	std::cout << "Assignation operator called" << std::endl;
	return(*this);
}

Fixed::Fixed(Fixed const &a){
	*this = a;
	std::cout << "Copy constructor called" << std::endl;	
	return;
}

void Fixed::setRawBits(int const var){
	this->_fpval = var;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}

int		Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpval);
}
