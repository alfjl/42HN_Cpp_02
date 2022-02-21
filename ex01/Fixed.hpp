#pragma once

#include <iostream>

class   Fixed
{
private:
    int                 _value;
    static const int    _nbrOfFractionalBits;

public:
    Fixed( void );
    Fixed( const int i_value );
    Fixed( const float f_value );
    Fixed( Fixed const &src);
    ~Fixed( void );

    Fixed   &operator=(Fixed const &src);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
