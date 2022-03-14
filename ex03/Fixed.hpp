#pragma once

#include <iostream>

class   Fixed
{
private:
    int                 _value;
    static const int    _nbrOfFractionalBits;

public:
    Fixed( void );
    Fixed( int const i_value );
    Fixed( float const f_value );
    Fixed( Fixed const &src );
    ~Fixed( void );

    // assignment operator
    Fixed           &operator=( Fixed const &src );
    
    // comparison operators
    bool                operator>( Fixed const &other ) const;
    bool                operator<( Fixed const &other ) const;
    bool                operator>=( Fixed const &other ) const;
    bool                operator<=( Fixed const &other ) const;
    bool                operator==( Fixed const &other ) const;
    bool                operator!=( Fixed const &other ) const;

    // arithmetic operators
    Fixed               operator+( Fixed const &other ) const;
    Fixed               operator-( Fixed const &other ) const;
    Fixed               operator*( Fixed const &other ) const;
    Fixed               operator/( Fixed const &other ) const;
    Fixed               operator++( void );
    Fixed               operator++( int );
    Fixed               operator--( void );
    Fixed               operator--( int );

    // getter & setter
    int                 getRawBits( void ) const;
    void                setRawBits( int const raw );
    
    // conversions
    float               toFloat( void ) const;
    int                 toInt( void ) const;

    // overloaded min and max
    static Fixed        &min( Fixed &a, Fixed &b );
    static const Fixed  &min( Fixed const &a, Fixed const &b );
    static Fixed        &max( Fixed &a, Fixed &b );
    static const Fixed  &max( Fixed const &a, Fixed const &b );
};

std::ostream    &operator<<( std::ostream &o, Fixed const &fixed );
