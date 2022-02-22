#include "Fixed.hpp"

int main( void )
{
    Fixed   a;
    Fixed   const b( 10 );
    Fixed   const c( 42.42f );
    Fixed   d( b );

    a = Fixed( 1234.432f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;


    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;


    std::cout << "############# OWN TEST #############" << std::endl;
    Fixed   y( -3 );
    Fixed   z( -123.456f );

    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;

    y = z;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;

    return 0;
}
