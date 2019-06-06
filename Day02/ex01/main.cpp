#include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed(void);
	Fixed(const Fixed &a);
    ~Fixed(void);
    Fixed &operator=(const Fixed &rhs);
    int   getRawBits() const;
    void  setRawBits(int const var);
	int   toInt(void) const;
    float toFloat(void) const;
	Fixed(const int value);
    Fixed(const float value);
private:
    int                 _fpval;
    static const int    _fb;
};

const int	Fixed::_fb = 8;
std::ostream  &operator << (std::ostream &output, Fixed const &input);

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


int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}