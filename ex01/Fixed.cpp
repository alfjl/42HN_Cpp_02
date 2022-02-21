#include <cmath>
#include "Fixed.hpp"

const int   Fixed::_nbrOfFractionalBits = 8;

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

Fixed   &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    if (this != &src)
        this->_value = src.getRawBits();
    
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->_value / (float)(1 << this->_nbrOfFractionalBits));
}

int     Fixed::toInt( void ) const
{
    return (this->_value >> this->_nbrOfFractionalBits);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return (o);
}
