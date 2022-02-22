#include "Fixed.hpp"

int main( void )
{
    Fixed   a;
    //Fixed   const b( Fixed( 5.05f ) + Fixed( 2 ) ); // own test
    //Fixed   const b( Fixed( 5.05f ) - Fixed( 2 ) ); // own test
    //Fixed   const b( Fixed( 5.05f ) / Fixed( 2 ) ); // own test
    Fixed   const b( Fixed( 5.05f ) * Fixed( 2 ) );

    
    std::cout << a << std::endl;
    //std::cout << ++a << std::endl;
    std::cout << --a << std::endl; // own test
    std::cout << a << std::endl;
    //std::cout << a++ << std::endl;
    std::cout << a-- << std::endl; // own test
    std::cout << a << std::endl;

    //for (int i = 0; i < 2; i++) // own test
        //std::cout << --a << std::endl; // own test

    std::cout << b << std::endl;
    
    std::cout << Fixed::max(a, b) << std::endl;
    //std::cout << Fixed::min(a, b) << std::endl; // own test

    return 0;
}
