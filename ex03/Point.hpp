#pragma once

#include "Fixed.hpp"

class	Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point( void );
	Point( float const x, float const y );
	Point ( Point const &other );
	~Point( void );

	// operator overloads
	Point	&operator=( Point const &src );
	//bool	operator==( Point const &other ) const;

	// getter & setter
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	float	getXFloat( void ) const;
	float	getYFloat( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Point const point);
