#include "Point.hpp"


Point::Point( void ) : _x(0), _y(0)
{}

Point::Point( float const x, float const y ) : _x(x), _y(y)
{}

Point::Point( Point const &other ) : _x(other.getX()), _y(other.getY())
{
	//*this = other;
}

Point::~Point( void ) {}

// operator overloads
Point	&Point::operator=( Point const &src )
{
	if (this != &src)
	{
		//this->_x = src._x;
		//this->_y = src._y;
	}

	return (*this);
}


// getter & setter
Fixed	Point::getX( void ) const
{
	return ( this->_x );
}

Fixed	Point::getY( void ) const
{
	return ( this->_y );
}
float	Point::getXFloat( void ) const
{
	return ( this->_x.toFloat() );
}

float	Point::getYFloat( void ) const
{
	return ( this->_y.toFloat() );
}

std::ostream	&operator<<(std::ostream &o, Point const point)
{
	o << "_x: " << point.getXFloat() << " / _y: " << point.getYFloat() << std::endl;
	return (o);
}
