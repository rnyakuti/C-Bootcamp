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

std::ostream  &operator << (std::ostream &output, Fixed const &input);

#endif