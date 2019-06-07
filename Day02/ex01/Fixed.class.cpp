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

Fixed::Fixed(int const value)
{
	this->_fpval = value << Fixed::_fb;
	std::cout << "Int constructor called" << std::endl;	
}

Fixed::Fixed(const float value)
{
	this->_fpval = roundf(value * (1 << _fb));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

std::ostream &operator<<(std::ostream &output, Fixed const &input)
{
    output << input.toFloat();
    return (output);
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_fpval) / (1 << _fb));
}

int Fixed::toInt(void) const
{
    return ((int)(this->_fpval >> _fb));
}
