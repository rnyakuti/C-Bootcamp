#include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed(void);
	Fixed(const Fixed &a);
    ~Fixed(void);
	Fixed &	operator++(void);
	Fixed operator++(int);
    Fixed &operator=(const Fixed &rhs);
    int   getRawBits() const;
    void  setRawBits(int const var);
	int   toInt(void) const;
    float toFloat(void) const;
	Fixed(const int value);
    Fixed(const float value);
	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);
	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;
	static Fixed & min(Fixed & var, Fixed & var2);
	static Fixed & max(Fixed & var, Fixed & var2);
	static Fixed const & min(Fixed const & var, Fixed const & var2);
	static Fixed const & max(Fixed const & var, Fixed const & var2);	
private:
    int                 _fpval;
    static const int    _fb;
};

const int	Fixed::_fb = 8;
std::ostream  &operator << (std::ostream &output, Fixed const &input);

Fixed::Fixed(void){
	this->_fpval = 0;
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	this->setRawBits(rhs.getRawBits());
	//std::cout << "Assignation operator called" << std::endl;
	return(*this);
}

Fixed::Fixed(Fixed const &a){
	*this = a;
	//std::cout << "Copy constructor called" << std::endl;	
	return;
}

void Fixed::setRawBits(int const var){
	this->_fpval = var;
	//std::cout << "setRawBits member function called" << std::endl;
	return;
}

int		Fixed::getRawBits()const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->_fpval);
}

Fixed::Fixed(int const value)
{
	this->_fpval = value << Fixed::_fb;
	//std::cout << "Int constructor called" << std::endl;	
}

Fixed::Fixed(const float value)
{
	this->_fpval = roundf(value * (1 << _fb));
    //std::cout << "Float constructor called" << std::endl;
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


bool		Fixed::operator>(Fixed const & rhs) const {
	return(this->_fpval > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const & rhs) const{
	return(this->_fpval < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const & rhs) const{
	return(this->_fpval >= rhs.getRawBits());
}
bool		Fixed::operator<=(Fixed const & rhs) const {
	return(this->_fpval <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const & rhs) const {
	return(this->_fpval == rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const & rhs) const {
	return(this->_fpval != rhs.getRawBits());
}

Fixed		Fixed::operator+(Fixed const & rhs) {
	return(this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-(Fixed const & rhs) {
	return(this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator*(Fixed const & rhs) {
	return(this->toFloat() * rhs.toFloat());
}

Fixed		Fixed::operator/(Fixed const & rhs) {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &			Fixed::operator++(void){
	this->_fpval += 1;
	return (*this);
}

Fixed			Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &			min(Fixed & var, Fixed & var2){
	return (var <= var2 ? var : var2);
}

Fixed &			max(Fixed & var, Fixed & var2){
	return (var >= var2 ? var : var2);
}

Fixed const & 	Fixed::min(Fixed const & var, Fixed const & var2){
	return (var <= var2 ? var : var2);
}

Fixed const & 	Fixed::max(Fixed const & var, Fixed const & var2){
	return (var >= var2 ? var : var2);
}


int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}