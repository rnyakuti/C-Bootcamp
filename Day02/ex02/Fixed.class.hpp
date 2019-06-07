#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
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

std::ostream  &operator << (std::ostream &output, Fixed const &input);

#endif