#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <string>
# include <iostream>

class Fixed
{
public:
    Fixed(void);
	Fixed(const Fixed &a);
    ~Fixed(void);
    Fixed &operator=(const Fixed &rhs);
    int   getRawBits() const;
    void  setRawBits(int const var);

private:
    int                 _fpval;
    static const int    _fb;
};

#endif