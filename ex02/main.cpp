#include "Fixed.hpp"

int main( void )
{
    Fixed   a;
    //Fixed   const b( Fixed( 5.05f ) + Fixed( 2 ) ); // own test
    //Fixed   const b( Fixed( 5.05f ) - Fixed( 2 ) ); // own test
    //Fixed   const b( Fixed( 5.05f ) / Fixed( 2 ) ); // own test
    Fixed   const b( Fixed( 5.05f ) * Fixed( 2 ) );

    
    std::cout << "a is " << a << std::endl;
    //std::cout << "++a is " << ++a << std::endl;
    //std::cout << "a is " << a << std::endl;
    //std::cout << "a++ is " << a++ << std::endl;
    //std::cout << "a is " << a << std::endl;


    //std::cout << "b is " << b << std::endl; // own test
    
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
