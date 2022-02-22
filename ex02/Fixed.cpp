#include <cmath>
#include "Fixed.hpp"

const int   Fixed::_nbrOfFractionalBits = 8;

// constructor & destructor
Fixed::Fixed( void ) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int i_value )
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = i_value << this->_nbrOfFractionalBits;
}

Fixed::Fixed( const float f_value )
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f_value * (1 << this->_nbrOfFractionalBits));
}

Fixed::Fixed( Fixed const &src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}


// assignment operator
Fixed   &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    if (this != &src)
        this->_value = src.getRawBits();
    
    return (*this);
}


// getter and setter
int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}


// conversion
float   Fixed::toFloat( void ) const
{
    return ((float)this->_value / (float)(1 << this->_nbrOfFractionalBits));
}

int     Fixed::toInt( void ) const
{
    return (this->_value >> this->_nbrOfFractionalBits);
}


// comparison operators
bool    Fixed::operator>(Fixed const &other) const
{
    return (this->_value > other.getRawBits());
}

bool    Fixed::operator<(Fixed const &other) const
{
    return (this->_value < other.getRawBits());
}

bool    Fixed::operator>=(Fixed const &other) const
{
    return (this->_value >= other.getRawBits());
}

bool    Fixed::operator<=(Fixed const &other) const
{
    return (this->_value <= other.getRawBits());
}

bool    Fixed::operator==(Fixed const &other) const
{
    return (this->_value == other.getRawBits());
}

bool    Fixed::operator!=(Fixed const &other) const
{
    return (this->_value != other.getRawBits());
}


// arithmetic operators
Fixed   Fixed::operator+(Fixed const &other) const
{
    Fixed   temp(this->toFloat() + other.toFloat());

    return (temp);
}

Fixed   Fixed::operator-(Fixed const &other) const
{
    Fixed   temp(this->toFloat() - other.toFloat());

    return (temp);
}

Fixed   Fixed::operator*(Fixed const &other) const
{
    Fixed   temp(this->toFloat() * other.toFloat());

    return (temp);
}

Fixed   Fixed::operator/(Fixed const &other) const
{
    Fixed   temp(this->toFloat() / other.toFloat());

    return (temp);
}


// overloaded min and max
Fixed    &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed    &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

Fixed    &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed    &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}


// insertion operator
std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return (o);
}
