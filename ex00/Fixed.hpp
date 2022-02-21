#pragma once

class   Fixed
{
private:
    int                 _value;
    static const int    _nbrOfFractionalBits;

public:
    Fixed( void );
    Fixed( Fixed const &src);
    ~Fixed( void );

    Fixed   &operator=(Fixed const &src);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};
